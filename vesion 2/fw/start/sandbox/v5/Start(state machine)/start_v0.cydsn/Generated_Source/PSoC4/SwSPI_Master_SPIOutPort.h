/*******************************************************************************
* File Name: SwSPI_Master_SPIOutPort.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_SwSPI_Master_SPIOutPort_H) /* Pins SwSPI_Master_SPIOutPort_H */
#define CY_PINS_SwSPI_Master_SPIOutPort_H

#include "cytypes.h"
#include "cyfitter.h"
#include "SwSPI_Master_SPIOutPort_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} SwSPI_Master_SPIOutPort_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   SwSPI_Master_SPIOutPort_Read(void);
void    SwSPI_Master_SPIOutPort_Write(uint8 value);
uint8   SwSPI_Master_SPIOutPort_ReadDataReg(void);
#if defined(SwSPI_Master_SPIOutPort__PC) || (CY_PSOC4_4200L) 
    void    SwSPI_Master_SPIOutPort_SetDriveMode(uint8 mode);
#endif
void    SwSPI_Master_SPIOutPort_SetInterruptMode(uint16 position, uint16 mode);
uint8   SwSPI_Master_SPIOutPort_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void SwSPI_Master_SPIOutPort_Sleep(void); 
void SwSPI_Master_SPIOutPort_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(SwSPI_Master_SPIOutPort__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define SwSPI_Master_SPIOutPort_DRIVE_MODE_BITS        (3)
    #define SwSPI_Master_SPIOutPort_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - SwSPI_Master_SPIOutPort_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the SwSPI_Master_SPIOutPort_SetDriveMode() function.
         *  @{
         */
        #define SwSPI_Master_SPIOutPort_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define SwSPI_Master_SPIOutPort_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define SwSPI_Master_SPIOutPort_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define SwSPI_Master_SPIOutPort_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define SwSPI_Master_SPIOutPort_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define SwSPI_Master_SPIOutPort_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define SwSPI_Master_SPIOutPort_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define SwSPI_Master_SPIOutPort_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define SwSPI_Master_SPIOutPort_MASK               SwSPI_Master_SPIOutPort__MASK
#define SwSPI_Master_SPIOutPort_SHIFT              SwSPI_Master_SPIOutPort__SHIFT
#define SwSPI_Master_SPIOutPort_WIDTH              3u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SwSPI_Master_SPIOutPort_SetInterruptMode() function.
     *  @{
     */
        #define SwSPI_Master_SPIOutPort_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define SwSPI_Master_SPIOutPort_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define SwSPI_Master_SPIOutPort_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define SwSPI_Master_SPIOutPort_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(SwSPI_Master_SPIOutPort__SIO)
    #define SwSPI_Master_SPIOutPort_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(SwSPI_Master_SPIOutPort__PC) && (CY_PSOC4_4200L)
    #define SwSPI_Master_SPIOutPort_USBIO_ENABLE               ((uint32)0x80000000u)
    #define SwSPI_Master_SPIOutPort_USBIO_DISABLE              ((uint32)(~SwSPI_Master_SPIOutPort_USBIO_ENABLE))
    #define SwSPI_Master_SPIOutPort_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define SwSPI_Master_SPIOutPort_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define SwSPI_Master_SPIOutPort_USBIO_ENTER_SLEEP          ((uint32)((1u << SwSPI_Master_SPIOutPort_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << SwSPI_Master_SPIOutPort_USBIO_SUSPEND_DEL_SHIFT)))
    #define SwSPI_Master_SPIOutPort_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << SwSPI_Master_SPIOutPort_USBIO_SUSPEND_SHIFT)))
    #define SwSPI_Master_SPIOutPort_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << SwSPI_Master_SPIOutPort_USBIO_SUSPEND_DEL_SHIFT)))
    #define SwSPI_Master_SPIOutPort_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(SwSPI_Master_SPIOutPort__PC)
    /* Port Configuration */
    #define SwSPI_Master_SPIOutPort_PC                 (* (reg32 *) SwSPI_Master_SPIOutPort__PC)
#endif
/* Pin State */
#define SwSPI_Master_SPIOutPort_PS                     (* (reg32 *) SwSPI_Master_SPIOutPort__PS)
/* Data Register */
#define SwSPI_Master_SPIOutPort_DR                     (* (reg32 *) SwSPI_Master_SPIOutPort__DR)
/* Input Buffer Disable Override */
#define SwSPI_Master_SPIOutPort_INP_DIS                (* (reg32 *) SwSPI_Master_SPIOutPort__PC2)

/* Interrupt configuration Registers */
#define SwSPI_Master_SPIOutPort_INTCFG                 (* (reg32 *) SwSPI_Master_SPIOutPort__INTCFG)
#define SwSPI_Master_SPIOutPort_INTSTAT                (* (reg32 *) SwSPI_Master_SPIOutPort__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define SwSPI_Master_SPIOutPort_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(SwSPI_Master_SPIOutPort__SIO)
    #define SwSPI_Master_SPIOutPort_SIO_REG            (* (reg32 *) SwSPI_Master_SPIOutPort__SIO)
#endif /* (SwSPI_Master_SPIOutPort__SIO_CFG) */

/* USBIO registers */
#if !defined(SwSPI_Master_SPIOutPort__PC) && (CY_PSOC4_4200L)
    #define SwSPI_Master_SPIOutPort_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define SwSPI_Master_SPIOutPort_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define SwSPI_Master_SPIOutPort_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define SwSPI_Master_SPIOutPort_DRIVE_MODE_SHIFT       (0x00u)
#define SwSPI_Master_SPIOutPort_DRIVE_MODE_MASK        (0x07u << SwSPI_Master_SPIOutPort_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins SwSPI_Master_SPIOutPort_H */


/* [] END OF FILE */
