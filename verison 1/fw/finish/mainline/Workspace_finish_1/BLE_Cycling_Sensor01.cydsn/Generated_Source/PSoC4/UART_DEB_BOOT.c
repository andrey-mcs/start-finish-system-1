/*******************************************************************************
* File Name: UART_DEB_BOOT.c
* Version 3.10
*
* Description:
*  This file provides the source code of the bootloader communication APIs
*  for the SCB Component Unconfigured mode.
*
* Note:
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "UART_DEB_BOOT.h"

#if defined(CYDEV_BOOTLOADER_IO_COMP) && (UART_DEB_BTLDR_COMM_ENABLED) && \
                                (UART_DEB_SCB_MODE_UNCONFIG_CONST_CFG)

/*******************************************************************************
* Function Name: UART_DEB_CyBtldrCommStart
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommStart function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UART_DEB_CyBtldrCommStart(void)
{
    if (UART_DEB_SCB_MODE_I2C_RUNTM_CFG)
    {
        UART_DEB_I2CCyBtldrCommStart();
    }
    else if (UART_DEB_SCB_MODE_EZI2C_RUNTM_CFG)
    {
        UART_DEB_EzI2CCyBtldrCommStart();
    }
#if (!UART_DEB_CY_SCBIP_V1)
    else if (UART_DEB_SCB_MODE_SPI_RUNTM_CFG)
    {
        UART_DEB_SpiCyBtldrCommStart();
    }
    else if (UART_DEB_SCB_MODE_UART_RUNTM_CFG)
    {
        UART_DEB_UartCyBtldrCommStart();
    }
#endif /* (!UART_DEB_CY_SCBIP_V1) */
    else
    {
        /* Unknown mode: do nothing */
    }
}


/*******************************************************************************
* Function Name: UART_DEB_CyBtldrCommStop
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommStop function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UART_DEB_CyBtldrCommStop(void)
{
    if (UART_DEB_SCB_MODE_I2C_RUNTM_CFG)
    {
        UART_DEB_I2CCyBtldrCommStop();
    }
    else if (UART_DEB_SCB_MODE_EZI2C_RUNTM_CFG)
    {
        UART_DEB_EzI2CCyBtldrCommStop();
    }
#if (!UART_DEB_CY_SCBIP_V1)
    else if (UART_DEB_SCB_MODE_SPI_RUNTM_CFG)
    {
        UART_DEB_SpiCyBtldrCommStop();
    }
    else if (UART_DEB_SCB_MODE_UART_RUNTM_CFG)
    {
        UART_DEB_UartCyBtldrCommStop();
    }
#endif /* (!UART_DEB_CY_SCBIP_V1) */
    else
    {
        /* Unknown mode: do nothing */
    }
}


/*******************************************************************************
* Function Name: UART_DEB_CyBtldrCommReset
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommReset function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UART_DEB_CyBtldrCommReset(void)
{
    if(UART_DEB_SCB_MODE_I2C_RUNTM_CFG)
    {
        UART_DEB_I2CCyBtldrCommReset();
    }
    else if(UART_DEB_SCB_MODE_EZI2C_RUNTM_CFG)
    {
        UART_DEB_EzI2CCyBtldrCommReset();
    }
#if (!UART_DEB_CY_SCBIP_V1)
    else if(UART_DEB_SCB_MODE_SPI_RUNTM_CFG)
    {
        UART_DEB_SpiCyBtldrCommReset();
    }
    else if(UART_DEB_SCB_MODE_UART_RUNTM_CFG)
    {
        UART_DEB_UartCyBtldrCommReset();
    }
#endif /* (!UART_DEB_CY_SCBIP_V1) */
    else
    {
        /* Unknown mode: do nothing */
    }
}


/*******************************************************************************
* Function Name: UART_DEB_CyBtldrCommRead
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommRead function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  pData:    Pointer to storage for the block of data to be read from the
*            bootloader host
*  size:     Number of bytes to be read.
*  count:    Pointer to the variable to write the number of bytes actually
*            read.
*  timeOut:  Number of units in 10 ms to wait before returning because of a
*            timeout.
*
* Return:
*  Returns CYRET_SUCCESS if no problem was encountered or returns the value
*  that best describes the problem.
*
*******************************************************************************/
cystatus UART_DEB_CyBtldrCommRead(uint8 pData[], uint16 size, uint16 * count, uint8 timeOut)
{
    cystatus status;

    if(UART_DEB_SCB_MODE_I2C_RUNTM_CFG)
    {
        status = UART_DEB_I2CCyBtldrCommRead(pData, size, count, timeOut);
    }
    else if(UART_DEB_SCB_MODE_EZI2C_RUNTM_CFG)
    {
        status = UART_DEB_EzI2CCyBtldrCommRead(pData, size, count, timeOut);
    }
#if (!UART_DEB_CY_SCBIP_V1)
    else if(UART_DEB_SCB_MODE_SPI_RUNTM_CFG)
    {
        status = UART_DEB_SpiCyBtldrCommRead(pData, size, count, timeOut);
    }
    else if(UART_DEB_SCB_MODE_UART_RUNTM_CFG)
    {
        status = UART_DEB_UartCyBtldrCommRead(pData, size, count, timeOut);
    }
#endif /* (!UART_DEB_CY_SCBIP_V1) */
    else
    {
        status = CYRET_INVALID_STATE; /* Unknown mode: return invalid status */
    }

    return(status);
}


/*******************************************************************************
* Function Name: UART_DEB_CyBtldrCommWrite
********************************************************************************
*
* Summary:
*  Calls the CyBtldrCommWrite  function of the bootloader communication
*  component for the selected mode.
*
* Parameters:
*  pData:    Pointer to the block of data to be written to the bootloader host.
*  size:     Number of bytes to be written.
*  count:    Pointer to the variable to write the number of bytes actually
*            written.
*  timeOut:  Number of units in 10 ms to wait before returning because of a
*            timeout.
*
* Return:
*  Returns CYRET_SUCCESS if no problem was encountered or returns the value
*  that best describes the problem.
*
*******************************************************************************/
cystatus UART_DEB_CyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut)
{
    cystatus status;

    if(UART_DEB_SCB_MODE_I2C_RUNTM_CFG)
    {
        status = UART_DEB_I2CCyBtldrCommWrite(pData, size, count, timeOut);
    }
    else if(UART_DEB_SCB_MODE_EZI2C_RUNTM_CFG)
    {
        status = UART_DEB_EzI2CCyBtldrCommWrite(pData, size, count, timeOut);
    }
#if (!UART_DEB_CY_SCBIP_V1)
    else if(UART_DEB_SCB_MODE_SPI_RUNTM_CFG)
    {
        status = UART_DEB_SpiCyBtldrCommWrite(pData, size, count, timeOut);
    }
    else if(UART_DEB_SCB_MODE_UART_RUNTM_CFG)
    {
        status = UART_DEB_UartCyBtldrCommWrite(pData, size, count, timeOut);
    }
#endif /* (!UART_DEB_CY_SCBIP_V1) */
    else
    {
        status = CYRET_INVALID_STATE; /* Unknown mode: return invalid status */
    }

    return(status);
}

#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (UART_DEB_BTLDR_COMM_MODE_ENABLED) */


/* [] END OF FILE */