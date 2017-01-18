/*******************************************************************************
* File Name: DIN.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_DIN_ALIASES_H) /* Pins DIN_ALIASES_H */
#define CY_PINS_DIN_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define DIN_0			(DIN__0__PC)
#define DIN_0_PS		(DIN__0__PS)
#define DIN_0_PC		(DIN__0__PC)
#define DIN_0_DR		(DIN__0__DR)
#define DIN_0_SHIFT	(DIN__0__SHIFT)
#define DIN_0_INTR	((uint16)((uint16)0x0003u << (DIN__0__SHIFT*2u)))

#define DIN_INTR_ALL	 ((uint16)(DIN_0_INTR))


#endif /* End Pins DIN_ALIASES_H */


/* [] END OF FILE */
