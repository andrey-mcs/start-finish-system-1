#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Rx_1 */
#define Rx_1__0__DR CYREG_GPIO_PRT1_DR
#define Rx_1__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Rx_1__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Rx_1__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Rx_1__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Rx_1__0__HSIOM_MASK 0x0F000000u
#define Rx_1__0__HSIOM_SHIFT 24u
#define Rx_1__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Rx_1__0__INTR CYREG_GPIO_PRT1_INTR
#define Rx_1__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Rx_1__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define Rx_1__0__MASK 0x40u
#define Rx_1__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Rx_1__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Rx_1__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Rx_1__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Rx_1__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Rx_1__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Rx_1__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Rx_1__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Rx_1__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Rx_1__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Rx_1__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Rx_1__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Rx_1__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Rx_1__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Rx_1__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Rx_1__0__PC CYREG_GPIO_PRT1_PC
#define Rx_1__0__PC2 CYREG_GPIO_PRT1_PC2
#define Rx_1__0__PORT 1u
#define Rx_1__0__PS CYREG_GPIO_PRT1_PS
#define Rx_1__0__SHIFT 6
#define Rx_1__DR CYREG_GPIO_PRT1_DR
#define Rx_1__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Rx_1__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Rx_1__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Rx_1__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Rx_1__INTR CYREG_GPIO_PRT1_INTR
#define Rx_1__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Rx_1__INTSTAT CYREG_GPIO_PRT1_INTR
#define Rx_1__MASK 0x40u
#define Rx_1__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Rx_1__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Rx_1__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Rx_1__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Rx_1__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Rx_1__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Rx_1__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Rx_1__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Rx_1__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Rx_1__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Rx_1__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Rx_1__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Rx_1__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Rx_1__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Rx_1__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Rx_1__PC CYREG_GPIO_PRT1_PC
#define Rx_1__PC2 CYREG_GPIO_PRT1_PC2
#define Rx_1__PORT 1u
#define Rx_1__PS CYREG_GPIO_PRT1_PS
#define Rx_1__SHIFT 6

/* Tx_1 */
#define Tx_1__0__DR CYREG_GPIO_PRT1_DR
#define Tx_1__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Tx_1__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Tx_1__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Tx_1__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Tx_1__0__HSIOM_MASK 0x00F00000u
#define Tx_1__0__HSIOM_SHIFT 20u
#define Tx_1__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Tx_1__0__INTR CYREG_GPIO_PRT1_INTR
#define Tx_1__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Tx_1__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define Tx_1__0__MASK 0x20u
#define Tx_1__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define Tx_1__0__OUT_SEL_SHIFT 10u
#define Tx_1__0__OUT_SEL_VAL 1u
#define Tx_1__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Tx_1__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Tx_1__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Tx_1__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Tx_1__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Tx_1__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Tx_1__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Tx_1__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Tx_1__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Tx_1__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Tx_1__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Tx_1__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Tx_1__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Tx_1__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Tx_1__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Tx_1__0__PC CYREG_GPIO_PRT1_PC
#define Tx_1__0__PC2 CYREG_GPIO_PRT1_PC2
#define Tx_1__0__PORT 1u
#define Tx_1__0__PS CYREG_GPIO_PRT1_PS
#define Tx_1__0__SHIFT 5
#define Tx_1__DR CYREG_GPIO_PRT1_DR
#define Tx_1__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define Tx_1__DR_INV CYREG_GPIO_PRT1_DR_INV
#define Tx_1__DR_SET CYREG_GPIO_PRT1_DR_SET
#define Tx_1__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define Tx_1__INTR CYREG_GPIO_PRT1_INTR
#define Tx_1__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define Tx_1__INTSTAT CYREG_GPIO_PRT1_INTR
#define Tx_1__MASK 0x20u
#define Tx_1__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Tx_1__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Tx_1__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Tx_1__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Tx_1__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Tx_1__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Tx_1__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Tx_1__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Tx_1__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Tx_1__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Tx_1__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Tx_1__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Tx_1__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Tx_1__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Tx_1__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Tx_1__PC CYREG_GPIO_PRT1_PC
#define Tx_1__PC2 CYREG_GPIO_PRT1_PC2
#define Tx_1__PORT 1u
#define Tx_1__PS CYREG_GPIO_PRT1_PS
#define Tx_1__SHIFT 5

/* UART_BUART */
#define UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL3
#define UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_UDB_W8_CTL3
#define UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST3
#define UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_UDB_W8_CTL3
#define UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST3
#define UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK3
#define UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK3
#define UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_UDB_W8_MSK3
#define UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_UDB_W8_MSK3
#define UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK3
#define UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK3
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL3
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_UDB_CAT16_CTL_ST3
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_UDB_CAT16_CTL_ST3
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_UDB_W8_ST3
#define UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_UDB_CAT16_A3
#define UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_UDB_W8_A03
#define UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_UDB_W8_A13
#define UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_UDB_CAT16_D3
#define UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_UDB_W8_D03
#define UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_UDB_W8_D13
#define UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL3
#define UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_UDB_CAT16_F3
#define UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_UDB_W8_F03
#define UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_UDB_W8_F13
#define UART_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK3
#define UART_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK3
#define UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL2
#define UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_UDB_W16_ST2
#define UART_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_BUART_sRX_RxSts__3__POS 3
#define UART_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_BUART_sRX_RxSts__4__POS 4
#define UART_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_BUART_sRX_RxSts__5__POS 5
#define UART_BUART_sRX_RxSts__MASK 0x38u
#define UART_BUART_sRX_RxSts__MASK_REG CYREG_UDB_W8_MSK2
#define UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL2
#define UART_BUART_sRX_RxSts__STATUS_REG CYREG_UDB_W8_ST2
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_UDB_W16_A01
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_UDB_W16_A11
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_UDB_W16_D01
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_UDB_W16_D11
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_UDB_W16_F01
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_UDB_W16_F11
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_UDB_CAT16_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_UDB_W8_A01
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_UDB_W8_A11
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_UDB_CAT16_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_UDB_W8_D01
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_UDB_W8_D11
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_UDB_CAT16_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_UDB_W8_F01
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_UDB_W8_F11
#define UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_UDB_W16_A00
#define UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_UDB_W16_A10
#define UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_UDB_W16_D00
#define UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_UDB_W16_D10
#define UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL0
#define UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_UDB_W16_F00
#define UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_UDB_W16_F10
#define UART_BUART_sTX_TxShifter_u0__32BIT_A0_REG CYREG_UDB_W32_A0
#define UART_BUART_sTX_TxShifter_u0__32BIT_A1_REG CYREG_UDB_W32_A1
#define UART_BUART_sTX_TxShifter_u0__32BIT_D0_REG CYREG_UDB_W32_D0
#define UART_BUART_sTX_TxShifter_u0__32BIT_D1_REG CYREG_UDB_W32_D1
#define UART_BUART_sTX_TxShifter_u0__32BIT_DP_AUX_CTL_REG CYREG_UDB_W32_ACTL
#define UART_BUART_sTX_TxShifter_u0__32BIT_F0_REG CYREG_UDB_W32_F0
#define UART_BUART_sTX_TxShifter_u0__32BIT_F1_REG CYREG_UDB_W32_F1
#define UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_UDB_CAT16_A0
#define UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_UDB_W8_A00
#define UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_UDB_W8_A10
#define UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_UDB_CAT16_D0
#define UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_UDB_W8_D00
#define UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_UDB_W8_D10
#define UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL0
#define UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_UDB_CAT16_F0
#define UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_UDB_W8_F00
#define UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_UDB_W8_F10
#define UART_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_BUART_sTX_TxSts__0__POS 0
#define UART_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_BUART_sTX_TxSts__1__POS 1
#define UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL0
#define UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_UDB_W16_ST0
#define UART_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_BUART_sTX_TxSts__2__POS 2
#define UART_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_BUART_sTX_TxSts__3__POS 3
#define UART_BUART_sTX_TxSts__32BIT_MASK_REG CYREG_UDB_W32_MSK
#define UART_BUART_sTX_TxSts__32BIT_STATUS_AUX_CTL_REG CYREG_UDB_W32_ACTL
#define UART_BUART_sTX_TxSts__32BIT_STATUS_REG CYREG_UDB_W32_ST
#define UART_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_BUART_sTX_TxSts__MASK_REG CYREG_UDB_W8_MSK0
#define UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL0
#define UART_BUART_sTX_TxSts__STATUS_REG CYREG_UDB_W8_ST0

/* UART_IntClock */
#define UART_IntClock__CTRL_REGISTER CYREG_PERI_PCLK_CTL11
#define UART_IntClock__DIV_ID 0x00000040u
#define UART_IntClock__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define UART_IntClock__PA_DIV_ID 0x000000FFu

/* Clock */
#define Clock__CTRL_REGISTER CYREG_PERI_PCLK_CTL7
#define Clock__DIV_ID 0x00000042u
#define Clock__DIV_REGISTER CYREG_PERI_DIV_16_CTL2
#define Clock__PA_DIV_ID 0x000000FFu

/* Clock_1 */
#define Clock_1__CTRL_REGISTER CYREG_PERI_PCLK_CTL8
#define Clock_1__DIV_ID 0x00000041u
#define Clock_1__DIV_REGISTER CYREG_PERI_DIV_16_CTL1
#define Clock_1__PA_DIV_ID 0x000000FFu

/* Pin_red */
#define Pin_red__0__DR CYREG_GPIO_PRT2_DR
#define Pin_red__0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define Pin_red__0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define Pin_red__0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define Pin_red__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Pin_red__0__HSIOM_MASK 0x0F000000u
#define Pin_red__0__HSIOM_SHIFT 24u
#define Pin_red__0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_red__0__INTR CYREG_GPIO_PRT2_INTR
#define Pin_red__0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_red__0__INTSTAT CYREG_GPIO_PRT2_INTR
#define Pin_red__0__MASK 0x40u
#define Pin_red__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_red__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_red__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_red__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_red__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_red__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_red__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_red__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_red__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_red__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_red__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_red__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_red__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_red__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_red__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_red__0__PC CYREG_GPIO_PRT2_PC
#define Pin_red__0__PC2 CYREG_GPIO_PRT2_PC2
#define Pin_red__0__PORT 2u
#define Pin_red__0__PS CYREG_GPIO_PRT2_PS
#define Pin_red__0__SHIFT 6
#define Pin_red__DR CYREG_GPIO_PRT2_DR
#define Pin_red__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define Pin_red__DR_INV CYREG_GPIO_PRT2_DR_INV
#define Pin_red__DR_SET CYREG_GPIO_PRT2_DR_SET
#define Pin_red__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_red__INTR CYREG_GPIO_PRT2_INTR
#define Pin_red__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_red__INTSTAT CYREG_GPIO_PRT2_INTR
#define Pin_red__MASK 0x40u
#define Pin_red__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_red__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_red__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_red__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_red__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_red__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_red__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_red__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_red__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_red__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_red__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_red__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_red__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_red__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_red__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_red__PC CYREG_GPIO_PRT2_PC
#define Pin_red__PC2 CYREG_GPIO_PRT2_PC2
#define Pin_red__PORT 2u
#define Pin_red__PS CYREG_GPIO_PRT2_PS
#define Pin_red__SHIFT 6

/* Pin_blue */
#define Pin_blue__0__DR CYREG_GPIO_PRT3_DR
#define Pin_blue__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_blue__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_blue__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_blue__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pin_blue__0__HSIOM_MASK 0xF0000000u
#define Pin_blue__0__HSIOM_SHIFT 28u
#define Pin_blue__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_blue__0__INTR CYREG_GPIO_PRT3_INTR
#define Pin_blue__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_blue__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_blue__0__MASK 0x80u
#define Pin_blue__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_blue__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_blue__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_blue__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_blue__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_blue__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_blue__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_blue__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_blue__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_blue__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_blue__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_blue__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_blue__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_blue__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_blue__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_blue__0__PC CYREG_GPIO_PRT3_PC
#define Pin_blue__0__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_blue__0__PORT 3u
#define Pin_blue__0__PS CYREG_GPIO_PRT3_PS
#define Pin_blue__0__SHIFT 7
#define Pin_blue__DR CYREG_GPIO_PRT3_DR
#define Pin_blue__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_blue__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_blue__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_blue__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_blue__INTR CYREG_GPIO_PRT3_INTR
#define Pin_blue__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_blue__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_blue__MASK 0x80u
#define Pin_blue__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_blue__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_blue__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_blue__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_blue__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_blue__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_blue__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_blue__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_blue__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_blue__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_blue__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_blue__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_blue__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_blue__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_blue__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_blue__PC CYREG_GPIO_PRT3_PC
#define Pin_blue__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_blue__PORT 3u
#define Pin_blue__PS CYREG_GPIO_PRT3_PS
#define Pin_blue__SHIFT 7

/* isr_stop */
#define isr_stop__INTC_CLR_EN_REG CYREG_CM0_ICER
#define isr_stop__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define isr_stop__INTC_MASK 0x02u
#define isr_stop__INTC_NUMBER 1u
#define isr_stop__INTC_PRIOR_MASK 0xC000u
#define isr_stop__INTC_PRIOR_NUM 3u
#define isr_stop__INTC_PRIOR_REG CYREG_CM0_IPR0
#define isr_stop__INTC_SET_EN_REG CYREG_CM0_ISER
#define isr_stop__INTC_SET_PD_REG CYREG_CM0_ISPR

/* isr_uart */
#define isr_uart__INTC_CLR_EN_REG CYREG_CM0_ICER
#define isr_uart__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define isr_uart__INTC_MASK 0x40000u
#define isr_uart__INTC_NUMBER 18u
#define isr_uart__INTC_PRIOR_MASK 0xC00000u
#define isr_uart__INTC_PRIOR_NUM 3u
#define isr_uart__INTC_PRIOR_REG CYREG_CM0_IPR4
#define isr_uart__INTC_SET_EN_REG CYREG_CM0_ISER
#define isr_uart__INTC_SET_PD_REG CYREG_CM0_ISPR

/* isr_wire */
#define isr_wire__INTC_CLR_EN_REG CYREG_CM0_ICER
#define isr_wire__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define isr_wire__INTC_MASK 0x20000u
#define isr_wire__INTC_NUMBER 17u
#define isr_wire__INTC_PRIOR_MASK 0xC000u
#define isr_wire__INTC_PRIOR_NUM 3u
#define isr_wire__INTC_PRIOR_REG CYREG_CM0_IPR4
#define isr_wire__INTC_SET_EN_REG CYREG_CM0_ISER
#define isr_wire__INTC_SET_PD_REG CYREG_CM0_ISPR

/* pin_wire */
#define pin_wire__0__DR CYREG_GPIO_PRT1_DR
#define pin_wire__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define pin_wire__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define pin_wire__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define pin_wire__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define pin_wire__0__HSIOM_MASK 0x0000000Fu
#define pin_wire__0__HSIOM_SHIFT 0u
#define pin_wire__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define pin_wire__0__INTR CYREG_GPIO_PRT1_INTR
#define pin_wire__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define pin_wire__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define pin_wire__0__MASK 0x01u
#define pin_wire__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define pin_wire__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define pin_wire__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define pin_wire__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define pin_wire__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define pin_wire__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define pin_wire__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define pin_wire__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define pin_wire__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define pin_wire__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define pin_wire__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define pin_wire__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define pin_wire__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define pin_wire__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define pin_wire__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define pin_wire__0__PC CYREG_GPIO_PRT1_PC
#define pin_wire__0__PC2 CYREG_GPIO_PRT1_PC2
#define pin_wire__0__PORT 1u
#define pin_wire__0__PS CYREG_GPIO_PRT1_PS
#define pin_wire__0__SHIFT 0
#define pin_wire__DR CYREG_GPIO_PRT1_DR
#define pin_wire__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define pin_wire__DR_INV CYREG_GPIO_PRT1_DR_INV
#define pin_wire__DR_SET CYREG_GPIO_PRT1_DR_SET
#define pin_wire__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define pin_wire__INTR CYREG_GPIO_PRT1_INTR
#define pin_wire__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define pin_wire__INTSTAT CYREG_GPIO_PRT1_INTR
#define pin_wire__MASK 0x01u
#define pin_wire__PA__CFG0 CYREG_UDB_PA1_CFG0
#define pin_wire__PA__CFG1 CYREG_UDB_PA1_CFG1
#define pin_wire__PA__CFG10 CYREG_UDB_PA1_CFG10
#define pin_wire__PA__CFG11 CYREG_UDB_PA1_CFG11
#define pin_wire__PA__CFG12 CYREG_UDB_PA1_CFG12
#define pin_wire__PA__CFG13 CYREG_UDB_PA1_CFG13
#define pin_wire__PA__CFG14 CYREG_UDB_PA1_CFG14
#define pin_wire__PA__CFG2 CYREG_UDB_PA1_CFG2
#define pin_wire__PA__CFG3 CYREG_UDB_PA1_CFG3
#define pin_wire__PA__CFG4 CYREG_UDB_PA1_CFG4
#define pin_wire__PA__CFG5 CYREG_UDB_PA1_CFG5
#define pin_wire__PA__CFG6 CYREG_UDB_PA1_CFG6
#define pin_wire__PA__CFG7 CYREG_UDB_PA1_CFG7
#define pin_wire__PA__CFG8 CYREG_UDB_PA1_CFG8
#define pin_wire__PA__CFG9 CYREG_UDB_PA1_CFG9
#define pin_wire__PC CYREG_GPIO_PRT1_PC
#define pin_wire__PC2 CYREG_GPIO_PRT1_PC2
#define pin_wire__PORT 1u
#define pin_wire__PS CYREG_GPIO_PRT1_PS
#define pin_wire__SHIFT 0

/* Pin_green */
#define Pin_green__0__DR CYREG_GPIO_PRT3_DR
#define Pin_green__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_green__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_green__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_green__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pin_green__0__HSIOM_MASK 0x0F000000u
#define Pin_green__0__HSIOM_SHIFT 24u
#define Pin_green__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_green__0__INTR CYREG_GPIO_PRT3_INTR
#define Pin_green__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_green__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_green__0__MASK 0x40u
#define Pin_green__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_green__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_green__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_green__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_green__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_green__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_green__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_green__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_green__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_green__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_green__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_green__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_green__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_green__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_green__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_green__0__PC CYREG_GPIO_PRT3_PC
#define Pin_green__0__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_green__0__PORT 3u
#define Pin_green__0__PS CYREG_GPIO_PRT3_PS
#define Pin_green__0__SHIFT 6
#define Pin_green__DR CYREG_GPIO_PRT3_DR
#define Pin_green__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_green__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_green__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_green__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_green__INTR CYREG_GPIO_PRT3_INTR
#define Pin_green__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_green__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_green__MASK 0x40u
#define Pin_green__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_green__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_green__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_green__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_green__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_green__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_green__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_green__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_green__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_green__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_green__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_green__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_green__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_green__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_green__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_green__PC CYREG_GPIO_PRT3_PC
#define Pin_green__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_green__PORT 3u
#define Pin_green__PS CYREG_GPIO_PRT3_PS
#define Pin_green__SHIFT 6

/* butt_stop */
#define butt_stop__0__DR CYREG_GPIO_PRT2_DR
#define butt_stop__0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define butt_stop__0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define butt_stop__0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define butt_stop__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define butt_stop__0__HSIOM_MASK 0xF0000000u
#define butt_stop__0__HSIOM_SHIFT 28u
#define butt_stop__0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define butt_stop__0__INTR CYREG_GPIO_PRT2_INTR
#define butt_stop__0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define butt_stop__0__INTSTAT CYREG_GPIO_PRT2_INTR
#define butt_stop__0__MASK 0x80u
#define butt_stop__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define butt_stop__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define butt_stop__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define butt_stop__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define butt_stop__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define butt_stop__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define butt_stop__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define butt_stop__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define butt_stop__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define butt_stop__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define butt_stop__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define butt_stop__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define butt_stop__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define butt_stop__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define butt_stop__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define butt_stop__0__PC CYREG_GPIO_PRT2_PC
#define butt_stop__0__PC2 CYREG_GPIO_PRT2_PC2
#define butt_stop__0__PORT 2u
#define butt_stop__0__PS CYREG_GPIO_PRT2_PS
#define butt_stop__0__SHIFT 7
#define butt_stop__DR CYREG_GPIO_PRT2_DR
#define butt_stop__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define butt_stop__DR_INV CYREG_GPIO_PRT2_DR_INV
#define butt_stop__DR_SET CYREG_GPIO_PRT2_DR_SET
#define butt_stop__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define butt_stop__INTR CYREG_GPIO_PRT2_INTR
#define butt_stop__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define butt_stop__INTSTAT CYREG_GPIO_PRT2_INTR
#define butt_stop__MASK 0x80u
#define butt_stop__PA__CFG0 CYREG_UDB_PA2_CFG0
#define butt_stop__PA__CFG1 CYREG_UDB_PA2_CFG1
#define butt_stop__PA__CFG10 CYREG_UDB_PA2_CFG10
#define butt_stop__PA__CFG11 CYREG_UDB_PA2_CFG11
#define butt_stop__PA__CFG12 CYREG_UDB_PA2_CFG12
#define butt_stop__PA__CFG13 CYREG_UDB_PA2_CFG13
#define butt_stop__PA__CFG14 CYREG_UDB_PA2_CFG14
#define butt_stop__PA__CFG2 CYREG_UDB_PA2_CFG2
#define butt_stop__PA__CFG3 CYREG_UDB_PA2_CFG3
#define butt_stop__PA__CFG4 CYREG_UDB_PA2_CFG4
#define butt_stop__PA__CFG5 CYREG_UDB_PA2_CFG5
#define butt_stop__PA__CFG6 CYREG_UDB_PA2_CFG6
#define butt_stop__PA__CFG7 CYREG_UDB_PA2_CFG7
#define butt_stop__PA__CFG8 CYREG_UDB_PA2_CFG8
#define butt_stop__PA__CFG9 CYREG_UDB_PA2_CFG9
#define butt_stop__PC CYREG_GPIO_PRT2_PC
#define butt_stop__PC2 CYREG_GPIO_PRT2_PC2
#define butt_stop__PORT 2u
#define butt_stop__PS CYREG_GPIO_PRT2_PS
#define butt_stop__SHIFT 7

/* Timer_uart_cy_m0s8_tcpwm_1 */
#define Timer_uart_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT1_CC
#define Timer_uart_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT1_CC_BUFF
#define Timer_uart_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT1_COUNTER
#define Timer_uart_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT1_CTRL
#define Timer_uart_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT1_INTR
#define Timer_uart_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT1_INTR_MASK
#define Timer_uart_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT1_INTR_MASKED
#define Timer_uart_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT1_INTR_SET
#define Timer_uart_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT1_PERIOD
#define Timer_uart_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT1_PERIOD_BUFF
#define Timer_uart_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT1_STATUS
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x02u
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 1
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x200u
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 9
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x2000000u
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 25
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x20000u
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 17
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x02u
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 1
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x02u
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 1
#define Timer_uart_cy_m0s8_tcpwm_1__TCPWM_NUMBER 1u
#define Timer_uart_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT1_TR_CTRL0
#define Timer_uart_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT1_TR_CTRL1
#define Timer_uart_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT1_TR_CTRL2

/* Timer_wire_cy_m0s8_tcpwm_1 */
#define Timer_wire_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT0_CC
#define Timer_wire_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT0_CC_BUFF
#define Timer_wire_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT0_COUNTER
#define Timer_wire_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT0_CTRL
#define Timer_wire_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT0_INTR
#define Timer_wire_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT0_INTR_MASK
#define Timer_wire_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT0_INTR_MASKED
#define Timer_wire_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT0_INTR_SET
#define Timer_wire_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT0_PERIOD
#define Timer_wire_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT0_PERIOD_BUFF
#define Timer_wire_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT0_STATUS
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x01u
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 0
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x100u
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 8
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x1000000u
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 24
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x10000u
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 16
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x01u
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 0
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x01u
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 0
#define Timer_wire_cy_m0s8_tcpwm_1__TCPWM_NUMBER 0u
#define Timer_wire_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT0_TR_CTRL0
#define Timer_wire_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT0_TR_CTRL1
#define Timer_wire_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT0_TR_CTRL2

/* isr_ustart */
#define isr_ustart__INTC_CLR_EN_REG CYREG_CM0_ICER
#define isr_ustart__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define isr_ustart__INTC_MASK 0x04u
#define isr_ustart__INTC_NUMBER 2u
#define isr_ustart__INTC_PRIOR_MASK 0xC00000u
#define isr_ustart__INTC_PRIOR_NUM 3u
#define isr_ustart__INTC_PRIOR_REG CYREG_CM0_IPR0
#define isr_ustart__INTC_SET_EN_REG CYREG_CM0_ISER
#define isr_ustart__INTC_SET_PD_REG CYREG_CM0_ISPR

/* isr_wstart */
#define isr_wstart__INTC_CLR_EN_REG CYREG_CM0_ICER
#define isr_wstart__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define isr_wstart__INTC_MASK 0x08u
#define isr_wstart__INTC_NUMBER 3u
#define isr_wstart__INTC_PRIOR_MASK 0xC0000000u
#define isr_wstart__INTC_PRIOR_NUM 3u
#define isr_wstart__INTC_PRIOR_REG CYREG_CM0_IPR0
#define isr_wstart__INTC_SET_EN_REG CYREG_CM0_ISER
#define isr_wstart__INTC_SET_PD_REG CYREG_CM0_ISPR

/* Miscellaneous */
#define CY_PROJECT_NAME "finish01.timer_uart"
#define CY_VERSION "PSoC Creator  3.3 SP1"
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x0E34119Eu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 10u
#define CYDEV_DFT_SELECT_CLK1 11u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8bless_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
