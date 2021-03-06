#include "lib_MyDelay\myDelay.h"
#include <AppDelay.h>
#include <SDinsert.h>
#include "lib_DB\logResult.h"
#include "lib_Network\network.h"
#include "lib_Display\display.h"

/*Minimum time to execution user function  */
#define MIN_DELAY_MS    150

#define WRITE_ERROR     1
#define WRITE_NO_ERROR  0

static uint16_t writeFlag;

/*user func*/
static void UserFunc_1(void);
static void UserFunc_2(void);
static void UserFunc_3(void);
static void UserFunc_4(void);


/*******************************************************************************
* Function Name: MyDelay
********************************************************************************
*
* Summary:
*   delay feature where users performed free time
*
* Parameters:
*  delayMs - delay time in miliseconds
*
*******************************************************************************/
void MyDelay(uint32_t delayMs)
{
    
    if(delayMs < MIN_DELAY_MS)
    {
        CyDelay(delayMs);
    }
    else
    {
        uint32_t runTime;
        uint32_t counter ;
        uint32_t period;
        
        runTime = 0;
        period = AppDelay_ReadPeriod();
        AppDelay_WriteCounter(period);       
        AppDelay_Start();
        
        while(((delayMs - runTime) > MIN_DELAY_MS) && (runTime <= delayMs))
        {
            /*user function*/      
            UserFunc_1();
            UserFunc_2();
            UserFunc_3();
            UserFunc_4();
            
            CyDelay(MIN_DELAY_MS);
                            
            counter = AppDelay_ReadCounter();
            runTime = (period -  counter)/32.768;
            
            /*user function*/  
        }
        AppDelay_Stop();
        
        #ifdef DEBUG_PC
        char buffer[100];
        sprintf(buffer,"time send data %u\n\r", (runTime));
        SW_UART_DEBUG_PutString(buffer);
        #endif
        
        if (delayMs > runTime)
        {
            CyDelay(delayMs - runTime);
        }
    }
}


static void UserFunc_1(void)
{
    /*network connection and transfer data*/

    SendData();           
    ReceiveData();
    
    #ifdef DEBUG_PC
    //inData.readStatus = READ_OK;
    #endif
 
}


static void UserFunc_2(void)
{
    /*write result skier on log 
    (if there is no memory card that is a record in fifo)*/
    
    if((FifoGetSize() > 0) || (writeFlag == WRITE_ERROR))
    {
        uint32_t result;
        skierDB_El tmpStruct;
        if (writeFlag == WRITE_NO_ERROR)
        {
            FifoGet(&tmpStruct);
            FifoPushLast(tmpStruct);
        }
        else
        {
            tmpStruct = FifoGetLast();
        }
        result = WriteSkierResult(&tmpStruct);
        if(result != FR_OK)
        {
            LogStart();
            writeFlag = WRITE_ERROR;
        }
        else
        {
            writeFlag = WRITE_NO_ERROR;
        }
    }
}

static void UserFunc_3(void)
{
    /*print indicator SD card*/
    if(SDinsert_Read() == 0)
    {
        DisplayIndicatorSD(SD_INSERT);
    }
    else
    {
        DisplayIndicatorSD(SD_NO_INSERT);
    }
    
    /*printindicator network*/
    if(NetworkStatus() == NETWORK_CONNECT)
    {
        DisplayIndicatorNetwork(CONNECT);
    }
    else
    {
        DisplayIndicatorNetwork(DISCONNECT);
    }  
}

static void UserFunc_4(void)
{
    /*printf real time and num skier on way*/
    
    DisplayRealTime();
    DisplayNumSkierOnWay(SkierOnWay());
}