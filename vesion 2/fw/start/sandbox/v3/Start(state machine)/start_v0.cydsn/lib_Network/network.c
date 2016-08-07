/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "lib_Network\network.h"



void InitNetwork(void)
{
    UART_XB_Start();
    
    #ifdef DEBUG_PC
    SW_UART_DEBUG_Start();
    SW_UART_DEBUG_PutString("\n\nInit network start\n\n");
    #endif
    
    inData.readStatus = NO_READ;
    outData.writeStatus = WRITE_OK;
    outData.IDpacket = 0xFF;
    networkStatus = NETWORK_DISCONN;   
    UART_XB_SpiUartClearRxBuffer();
}

void AppDelay(uint32_t delayMs)
{
    uint32_t runTime;
    
    runTime = 0;
    numAttemps = 0;
    
    if(delayMs < MIN_DELAYMS)
    {
        CyDelay(delayMs);
    }else
    {
        AppDelay_WriteCounter(131071);
        uint32_t counter = AppDelay_ReadCounter();
        
        AppDelay_Start();
        
        #ifdef DEBUG_PC
            int count = 0;
        #endif
        
        while(((delayMs - runTime) > MIN_DELAYMS) && (runTime <= delayMs))
        {
            /*user function*/      
            if(outData.writeStatus == NO_WRITE && inData.readStatus == READ_OK)
            {
                if (inData.IDpacket == outData.IDpacket)
                {
                    SendPreviousPacket();
                }
                else
                {
                    SendData();
                }
            }
            if(outData.writeStatus == WRITE_OK && inData.readStatus == NO_READ)
            {
                ReceiveData();
                
            }
        
            CyDelay((uint32)MIN_DELAYMS);
            uint32_t period = AppDelay_ReadPeriod();;
            counter = AppDelay_ReadCounter();
            runTime = (period -  counter)/32.768;
            
            #ifdef DEBUG_PC
            //outData.writeStatus = READ_OK;
            if(delayMs == 2000)
            {
                char buf[100];
                sprintf(buf,"----------------%i !! %i-------------------",count++, runTime);
                SW_UART_DEBUG_PutString(buf);
            }
            #endif
        }
        AppDelay_Stop();
        
        #ifdef DEBUG_PC
        char buffer[100];
        sprintf(buffer,"time send data %u\n\r", (runTime));
        SW_UART_DEBUG_PutString(buffer);
        #endif
        #ifdef DEBUG_PC
            char buff[100];
            uint32_t time;
            time = RTC_GetTime();
            sprintf(buff, "%02lu:%02lu:%02lu        ", RTC_GetHours(time),RTC_GetMinutes(time), RTC_GetSecond(time));
            LCD_Position(1,0);
            LCD_PrintString(buff);
        #endif
        
        /*tyme to respond*/
        if(noConnect++ >= 5)
        {
            networkStatus = NETWORK_DISCONN;
        }
        if (delayMs > runTime)
        {
            CyDelay(delayMs - runTime);
        }
    }
    

}

void SendData(void)
{
    char sendBuffer[DATA_BUFFER];
    char sendData[DATA_BUFFER];
    int i;
    
    /*pack data*/
    sprintf(sendData,"%02X:%08X%08X%04X%02X",
            0u,
            (uint32_t)((outData.unixStartTime & 0xFFFFFFFF00000000) >> 32), 
            (uint32_t)(outData.unixStartTime & 0x00000000FFFFFFFF), 
            outData.startMsTime, 
            outData.newSkier);
    
    
    PackData(sendBuffer, (uint8_t *)sendData, inData.IDpacket);
    UART_XB_UartPutString(sendBuffer);
    

    outData.newSkier = !NEW_SKIER_IN_TARCK;
        
    outData.writeStatus = WRITE_OK;
    outData.IDpacket = inData.IDpacket;
    inData.readStatus = NO_READ;
    #ifdef DEBUG_PC
    SW_UART_DEBUG_PutString("out data - "); 
    SW_UART_DEBUG_PutString(sendBuffer);   
    SW_UART_DEBUG_PutString("\n\r");
    #endif   
    strcpy(previousData, sendBuffer);
}

void SendPreviousPacket(void)
{
    UART_XB_UartPutString(previousData);
    outData.writeStatus = WRITE_OK;
    inData.readStatus = NO_READ;
}

uint32_t ReceiveData(void)
{
    uint32_t result = 0;
    int i;
    uint32_t byte;
    struct Resp recvData;
      
    while((UART_XB_SpiUartGetRxBufferSize() > 0) && ((byte=UART_XB_UartGetChar()) != 0))
    { 
        result = UnpackData(&recvData, (uint8_t)(byte & 0xFF));
        
        #ifdef DEBUG_PC
        //SW_UART_DEBUG_PutString("\nbyte - ");
        SW_UART_DEBUG_PutChar(byte);
        #endif
        
        if(recvData.EndPacket == 1)
        {                      
            inData.IDpacket = recvData.Seq;
            
            inData.readStatus = READ_OK;
            outData.writeStatus = NO_WRITE;
            
            /*connect network*/
            networkStatus = NETWORK_CONN;
            noConnect = 0;
            /*write data*/
            inData.countSkiers = recvData.Data3;
            //inData.unixStartTime = recvData.Data1;
            inData.ready = (recvData.Data2 & 0xFF00) >> 8;
            inData.reboot = recvData.Data2 & 0x00FF;
            /*next packet*/
            //outData.IDpacket++;
            #ifdef DEBUG_PC
            SW_UART_DEBUG_PutString("       READ DATA OKEY");   
            SW_UART_DEBUG_PutString("\n\r");
            #endif 

            return  NO_ERROR;  
        }
    }
    
    #ifdef DEBUG_PC
    //SW_UART_DEBUG_PutString("\nERROR READ!!!!");   
    //SW_UART_DEBUG_PutString("\n\r");
    #endif 
    return  ERROR;
}


uint32_t NetworkStatus(void)
{
    return networkStatus;
}

void SendSkierStart(uint64_t unixTimeStart, uint32_t recentMs)
{
    outData.unixStartTime = unixTimeStart;
    outData.startMsTime = recentMs;
    outData.newSkier = NEW_SKIER_IN_TARCK;
}

uint32_t FinReady(void)
{
    return inData.ready;
}


uint32_t FinWriteInDB(void)
{
    uint32_t result;
    
    if(outData.newSkier == NEW_SKIER_IN_TARCK)
    {
        result = ERROR;
    }else
    {
        result = NO_ERROR;
    }
    return result;
}
/* [] END OF FILE */