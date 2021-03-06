/*******************************************************************************
* File Name: led_green.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "led_green.h"

static led_green_BACKUP_STRUCT  led_green_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: led_green_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function must be called for SIO and USBIO
*  pins. It is not essential if using GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet led_green_SUT.c usage_led_green_Sleep_Wakeup
*******************************************************************************/
void led_green_Sleep(void)
{
    #if defined(led_green__PC)
        led_green_backup.pcState = led_green_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            led_green_backup.usbState = led_green_CR1_REG;
            led_green_USB_POWER_REG |= led_green_USBIO_ENTER_SLEEP;
            led_green_CR1_REG &= led_green_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(led_green__SIO)
        led_green_backup.sioState = led_green_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        led_green_SIO_REG &= (uint32)(~led_green_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: led_green_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep().
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to led_green_Sleep() for an example usage.
*******************************************************************************/
void led_green_Wakeup(void)
{
    #if defined(led_green__PC)
        led_green_PC = led_green_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            led_green_USB_POWER_REG &= led_green_USBIO_EXIT_SLEEP_PH1;
            led_green_CR1_REG = led_green_backup.usbState;
            led_green_USB_POWER_REG &= led_green_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(led_green__SIO)
        led_green_SIO_REG = led_green_backup.sioState;
    #endif
}


/* [] END OF FILE */
