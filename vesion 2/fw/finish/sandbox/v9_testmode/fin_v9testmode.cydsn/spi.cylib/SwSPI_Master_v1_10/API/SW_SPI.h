/* ========================================
 *
 * File Name: `$INSTANCE_NAME`.h
 * Version `$CY_MAJOR_VERSION`.`$CY_MINOR_VERSION` 
 * Copyright ANDREY TKACHOV, 2016
  
 * Descriprion: 
 *  This file provides constants and parameter values 
 *  for the Software Serial Programming Interface Component.

 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF PERSONAL LICENSE.
 *
 * ========================================
*/

#ifndef CY_SW_SPI_`$INSTANCE_NAME`_H
#define CY_SW_SPI_`$INSTANCE_NAME`_H
        
#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"

/* Nop ASM implementation*/
#define nop() \
            asm("mov r0,r0")

/***************************************
*        Function Prototypes
***************************************/

void `$INSTANCE_NAME`_Start(void) `=ReentrantKeil("`$INSTANCE_NAME`_Start")`;    
void `$INSTANCE_NAME`_Stop(void) `=ReentrantKeil("`$INSTANCE_NAME`_Stop")`;
void `$INSTANCE_NAME`_Init(void) `=ReentrantKeil("`$INSTANCE_NAME`_Init")`;
void `$INSTANCE_NAME`_ChipSelect(void) `=ReentrantKeil("`$INSTANCE_NAME`_ChipSelect")`;
void `$INSTANCE_NAME`_ChipDeselect(void) `=ReentrantKeil("`$INSTANCE_NAME`_ChipDeselect")`;
void `$INSTANCE_NAME`_SendBuff(const uint8 buff[], uint16 cnt) `=ReentrantKeil("`$INSTANCE_NAME`_SendBuff")`;
void `$INSTANCE_NAME`_SendByte(uint8 byte) `=ReentrantKeil("`$INSTANCE_NAME`_SendByte")`;
uint8 `$INSTANCE_NAME`_ReadAndWriteByte(uint8 byte) `=ReentrantKeil("`$INSTANCE_NAME`_ReadAndWriteByte")`;
void `$INSTANCE_NAME`_RecvBuff(uint8 *buff, uint16 cnt) `=ReentrantKeil("`$INSTANCE_NAME`_RecvBuff")`;
uint8 `$INSTANCE_NAME`_RecvByte(void) `=ReentrantKeil("`$INSTANCE_NAME`_RecvByte")`;

#endif /* CY_SW_SPI_`$INSTANCE_NAME`_H */
    
    
/* [] END OF FILE */
