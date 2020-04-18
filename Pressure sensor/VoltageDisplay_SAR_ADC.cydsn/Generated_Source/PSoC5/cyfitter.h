/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* ADC */
#define ADC_ADC_SAR__CLK CYREG_SAR0_CLK
#define ADC_ADC_SAR__CSR0 CYREG_SAR0_CSR0
#define ADC_ADC_SAR__CSR1 CYREG_SAR0_CSR1
#define ADC_ADC_SAR__CSR2 CYREG_SAR0_CSR2
#define ADC_ADC_SAR__CSR3 CYREG_SAR0_CSR3
#define ADC_ADC_SAR__CSR4 CYREG_SAR0_CSR4
#define ADC_ADC_SAR__CSR5 CYREG_SAR0_CSR5
#define ADC_ADC_SAR__CSR6 CYREG_SAR0_CSR6
#define ADC_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define ADC_ADC_SAR__PM_ACT_MSK 0x01u
#define ADC_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define ADC_ADC_SAR__PM_STBY_MSK 0x01u
#define ADC_ADC_SAR__SW0 CYREG_SAR0_SW0
#define ADC_ADC_SAR__SW2 CYREG_SAR0_SW2
#define ADC_ADC_SAR__SW3 CYREG_SAR0_SW3
#define ADC_ADC_SAR__SW4 CYREG_SAR0_SW4
#define ADC_ADC_SAR__SW6 CYREG_SAR0_SW6
#define ADC_ADC_SAR__TR0 CYREG_SAR0_TR0
#define ADC_ADC_SAR__WRK0 CYREG_SAR0_WRK0
#define ADC_ADC_SAR__WRK1 CYREG_SAR0_WRK1
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_IRQ__INTC_MASK 0x02u
#define ADC_IRQ__INTC_NUMBER 1u
#define ADC_IRQ__INTC_PRIOR_NUM 7u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define ADC_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define ADC_theACLK__CFG0 CYREG_CLKDIST_ACFG1_CFG0
#define ADC_theACLK__CFG1 CYREG_CLKDIST_ACFG1_CFG1
#define ADC_theACLK__CFG2 CYREG_CLKDIST_ACFG1_CFG2
#define ADC_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_theACLK__CFG3 CYREG_CLKDIST_ACFG1_CFG3
#define ADC_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_theACLK__INDEX 0x01u
#define ADC_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_theACLK__PM_ACT_MSK 0x02u
#define ADC_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_theACLK__PM_STBY_MSK 0x02u

/* LCD */
#define LCD_LCDPort__0__INTTYPE CYREG_PICU2_INTTYPE0
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2u
#define LCD_LCDPort__0__SHIFT 0u
#define LCD_LCDPort__1__INTTYPE CYREG_PICU2_INTTYPE1
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2u
#define LCD_LCDPort__1__SHIFT 1u
#define LCD_LCDPort__2__INTTYPE CYREG_PICU2_INTTYPE2
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2u
#define LCD_LCDPort__2__SHIFT 2u
#define LCD_LCDPort__3__INTTYPE CYREG_PICU2_INTTYPE3
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2u
#define LCD_LCDPort__3__SHIFT 3u
#define LCD_LCDPort__4__INTTYPE CYREG_PICU2_INTTYPE4
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2u
#define LCD_LCDPort__4__SHIFT 4u
#define LCD_LCDPort__5__INTTYPE CYREG_PICU2_INTTYPE5
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2u
#define LCD_LCDPort__5__SHIFT 5u
#define LCD_LCDPort__6__INTTYPE CYREG_PICU2_INTTYPE6
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2u
#define LCD_LCDPort__6__SHIFT 6u
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2u
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0u
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* P0_4 */
#define P0_4__0__INTTYPE CYREG_PICU3_INTTYPE4
#define P0_4__0__MASK 0x10u
#define P0_4__0__PC CYREG_PRT3_PC4
#define P0_4__0__PORT 3u
#define P0_4__0__SHIFT 4u
#define P0_4__AG CYREG_PRT3_AG
#define P0_4__AMUX CYREG_PRT3_AMUX
#define P0_4__BIE CYREG_PRT3_BIE
#define P0_4__BIT_MASK CYREG_PRT3_BIT_MASK
#define P0_4__BYP CYREG_PRT3_BYP
#define P0_4__CTL CYREG_PRT3_CTL
#define P0_4__DM0 CYREG_PRT3_DM0
#define P0_4__DM1 CYREG_PRT3_DM1
#define P0_4__DM2 CYREG_PRT3_DM2
#define P0_4__DR CYREG_PRT3_DR
#define P0_4__INP_DIS CYREG_PRT3_INP_DIS
#define P0_4__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define P0_4__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define P0_4__LCD_EN CYREG_PRT3_LCD_EN
#define P0_4__MASK 0x10u
#define P0_4__PORT 3u
#define P0_4__PRT CYREG_PRT3_PRT
#define P0_4__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define P0_4__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define P0_4__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define P0_4__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define P0_4__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define P0_4__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define P0_4__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define P0_4__PS CYREG_PRT3_PS
#define P0_4__SHIFT 4u
#define P0_4__SLW CYREG_PRT3_SLW

/* P0_5 */
#define P0_5__0__INTTYPE CYREG_PICU15_INTTYPE2
#define P0_5__0__MASK 0x04u
#define P0_5__0__PC CYREG_IO_PC_PRT15_PC2
#define P0_5__0__PORT 15u
#define P0_5__0__SHIFT 2u
#define P0_5__AG CYREG_PRT15_AG
#define P0_5__AMUX CYREG_PRT15_AMUX
#define P0_5__BIE CYREG_PRT15_BIE
#define P0_5__BIT_MASK CYREG_PRT15_BIT_MASK
#define P0_5__BYP CYREG_PRT15_BYP
#define P0_5__CTL CYREG_PRT15_CTL
#define P0_5__DM0 CYREG_PRT15_DM0
#define P0_5__DM1 CYREG_PRT15_DM1
#define P0_5__DM2 CYREG_PRT15_DM2
#define P0_5__DR CYREG_PRT15_DR
#define P0_5__INP_DIS CYREG_PRT15_INP_DIS
#define P0_5__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define P0_5__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define P0_5__LCD_EN CYREG_PRT15_LCD_EN
#define P0_5__MASK 0x04u
#define P0_5__PORT 15u
#define P0_5__PRT CYREG_PRT15_PRT
#define P0_5__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define P0_5__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define P0_5__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define P0_5__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define P0_5__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define P0_5__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define P0_5__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define P0_5__PS CYREG_PRT15_PS
#define P0_5__SHIFT 2u
#define P0_5__SLW CYREG_PRT15_SLW

/* Pin_1 */
#define Pin_1__0__INTTYPE CYREG_PICU1_INTTYPE6
#define Pin_1__0__MASK 0x40u
#define Pin_1__0__PC CYREG_PRT1_PC6
#define Pin_1__0__PORT 1u
#define Pin_1__0__SHIFT 6u
#define Pin_1__AG CYREG_PRT1_AG
#define Pin_1__AMUX CYREG_PRT1_AMUX
#define Pin_1__BIE CYREG_PRT1_BIE
#define Pin_1__BIT_MASK CYREG_PRT1_BIT_MASK
#define Pin_1__BYP CYREG_PRT1_BYP
#define Pin_1__CTL CYREG_PRT1_CTL
#define Pin_1__DM0 CYREG_PRT1_DM0
#define Pin_1__DM1 CYREG_PRT1_DM1
#define Pin_1__DM2 CYREG_PRT1_DM2
#define Pin_1__DR CYREG_PRT1_DR
#define Pin_1__INP_DIS CYREG_PRT1_INP_DIS
#define Pin_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Pin_1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Pin_1__LCD_EN CYREG_PRT1_LCD_EN
#define Pin_1__MASK 0x40u
#define Pin_1__PORT 1u
#define Pin_1__PRT CYREG_PRT1_PRT
#define Pin_1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Pin_1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Pin_1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Pin_1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Pin_1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Pin_1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Pin_1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Pin_1__PS CYREG_PRT1_PS
#define Pin_1__SHIFT 6u
#define Pin_1__SLW CYREG_PRT1_SLW

/* mySCL */
#define mySCL__0__INTTYPE CYREG_PICU3_INTTYPE1
#define mySCL__0__MASK 0x02u
#define mySCL__0__PC CYREG_PRT3_PC1
#define mySCL__0__PORT 3u
#define mySCL__0__SHIFT 1u
#define mySCL__AG CYREG_PRT3_AG
#define mySCL__AMUX CYREG_PRT3_AMUX
#define mySCL__BIE CYREG_PRT3_BIE
#define mySCL__BIT_MASK CYREG_PRT3_BIT_MASK
#define mySCL__BYP CYREG_PRT3_BYP
#define mySCL__CTL CYREG_PRT3_CTL
#define mySCL__DM0 CYREG_PRT3_DM0
#define mySCL__DM1 CYREG_PRT3_DM1
#define mySCL__DM2 CYREG_PRT3_DM2
#define mySCL__DR CYREG_PRT3_DR
#define mySCL__INP_DIS CYREG_PRT3_INP_DIS
#define mySCL__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define mySCL__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define mySCL__LCD_EN CYREG_PRT3_LCD_EN
#define mySCL__MASK 0x02u
#define mySCL__PORT 3u
#define mySCL__PRT CYREG_PRT3_PRT
#define mySCL__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define mySCL__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define mySCL__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define mySCL__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define mySCL__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define mySCL__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define mySCL__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define mySCL__PS CYREG_PRT3_PS
#define mySCL__SHIFT 1u
#define mySCL__SLW CYREG_PRT3_SLW

/* mySDA */
#define mySDA__0__INTTYPE CYREG_PICU3_INTTYPE2
#define mySDA__0__MASK 0x04u
#define mySDA__0__PC CYREG_PRT3_PC2
#define mySDA__0__PORT 3u
#define mySDA__0__SHIFT 2u
#define mySDA__AG CYREG_PRT3_AG
#define mySDA__AMUX CYREG_PRT3_AMUX
#define mySDA__BIE CYREG_PRT3_BIE
#define mySDA__BIT_MASK CYREG_PRT3_BIT_MASK
#define mySDA__BYP CYREG_PRT3_BYP
#define mySDA__CTL CYREG_PRT3_CTL
#define mySDA__DM0 CYREG_PRT3_DM0
#define mySDA__DM1 CYREG_PRT3_DM1
#define mySDA__DM2 CYREG_PRT3_DM2
#define mySDA__DR CYREG_PRT3_DR
#define mySDA__INP_DIS CYREG_PRT3_INP_DIS
#define mySDA__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define mySDA__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define mySDA__LCD_EN CYREG_PRT3_LCD_EN
#define mySDA__MASK 0x04u
#define mySDA__PORT 3u
#define mySDA__PRT CYREG_PRT3_PRT
#define mySDA__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define mySDA__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define mySDA__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define mySDA__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define mySDA__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define mySDA__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define mySDA__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define mySDA__PS CYREG_PRT3_PS
#define mySDA__SHIFT 2u
#define mySDA__SLW CYREG_PRT3_SLW

/* clock_2 */
#define clock_2__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define clock_2__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define clock_2__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define clock_2__CFG2_SRC_SEL_MASK 0x07u
#define clock_2__INDEX 0x00u
#define clock_2__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define clock_2__PM_ACT_MSK 0x01u
#define clock_2__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define clock_2__PM_STBY_MSK 0x01u

/* CharLCD_1 */
#define CharLCD_1_LCDPort__0__INTTYPE CYREG_PICU12_INTTYPE0
#define CharLCD_1_LCDPort__0__MASK 0x01u
#define CharLCD_1_LCDPort__0__PC CYREG_PRT12_PC0
#define CharLCD_1_LCDPort__0__PORT 12u
#define CharLCD_1_LCDPort__0__SHIFT 0u
#define CharLCD_1_LCDPort__1__INTTYPE CYREG_PICU12_INTTYPE1
#define CharLCD_1_LCDPort__1__MASK 0x02u
#define CharLCD_1_LCDPort__1__PC CYREG_PRT12_PC1
#define CharLCD_1_LCDPort__1__PORT 12u
#define CharLCD_1_LCDPort__1__SHIFT 1u
#define CharLCD_1_LCDPort__2__INTTYPE CYREG_PICU12_INTTYPE2
#define CharLCD_1_LCDPort__2__MASK 0x04u
#define CharLCD_1_LCDPort__2__PC CYREG_PRT12_PC2
#define CharLCD_1_LCDPort__2__PORT 12u
#define CharLCD_1_LCDPort__2__SHIFT 2u
#define CharLCD_1_LCDPort__3__INTTYPE CYREG_PICU12_INTTYPE3
#define CharLCD_1_LCDPort__3__MASK 0x08u
#define CharLCD_1_LCDPort__3__PC CYREG_PRT12_PC3
#define CharLCD_1_LCDPort__3__PORT 12u
#define CharLCD_1_LCDPort__3__SHIFT 3u
#define CharLCD_1_LCDPort__4__INTTYPE CYREG_PICU12_INTTYPE4
#define CharLCD_1_LCDPort__4__MASK 0x10u
#define CharLCD_1_LCDPort__4__PC CYREG_PRT12_PC4
#define CharLCD_1_LCDPort__4__PORT 12u
#define CharLCD_1_LCDPort__4__SHIFT 4u
#define CharLCD_1_LCDPort__5__INTTYPE CYREG_PICU12_INTTYPE5
#define CharLCD_1_LCDPort__5__MASK 0x20u
#define CharLCD_1_LCDPort__5__PC CYREG_PRT12_PC5
#define CharLCD_1_LCDPort__5__PORT 12u
#define CharLCD_1_LCDPort__5__SHIFT 5u
#define CharLCD_1_LCDPort__6__INTTYPE CYREG_PICU12_INTTYPE6
#define CharLCD_1_LCDPort__6__MASK 0x40u
#define CharLCD_1_LCDPort__6__PC CYREG_PRT12_PC6
#define CharLCD_1_LCDPort__6__PORT 12u
#define CharLCD_1_LCDPort__6__SHIFT 6u
#define CharLCD_1_LCDPort__AG CYREG_PRT12_AG
#define CharLCD_1_LCDPort__BIE CYREG_PRT12_BIE
#define CharLCD_1_LCDPort__BIT_MASK CYREG_PRT12_BIT_MASK
#define CharLCD_1_LCDPort__BYP CYREG_PRT12_BYP
#define CharLCD_1_LCDPort__DM0 CYREG_PRT12_DM0
#define CharLCD_1_LCDPort__DM1 CYREG_PRT12_DM1
#define CharLCD_1_LCDPort__DM2 CYREG_PRT12_DM2
#define CharLCD_1_LCDPort__DR CYREG_PRT12_DR
#define CharLCD_1_LCDPort__INP_DIS CYREG_PRT12_INP_DIS
#define CharLCD_1_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define CharLCD_1_LCDPort__MASK 0x7Fu
#define CharLCD_1_LCDPort__PORT 12u
#define CharLCD_1_LCDPort__PRT CYREG_PRT12_PRT
#define CharLCD_1_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define CharLCD_1_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define CharLCD_1_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define CharLCD_1_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define CharLCD_1_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define CharLCD_1_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define CharLCD_1_LCDPort__PS CYREG_PRT12_PS
#define CharLCD_1_LCDPort__SHIFT 0u
#define CharLCD_1_LCDPort__SIO_CFG CYREG_PRT12_SIO_CFG
#define CharLCD_1_LCDPort__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define CharLCD_1_LCDPort__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define CharLCD_1_LCDPort__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define CharLCD_1_LCDPort__SLW CYREG_PRT12_SLW

/* Counter_1 */
#define Counter_1_CounterUDB_sC24_counterdp_u0__16BIT_A0_REG CYREG_B1_UDB04_05_A0
#define Counter_1_CounterUDB_sC24_counterdp_u0__16BIT_A1_REG CYREG_B1_UDB04_05_A1
#define Counter_1_CounterUDB_sC24_counterdp_u0__16BIT_D0_REG CYREG_B1_UDB04_05_D0
#define Counter_1_CounterUDB_sC24_counterdp_u0__16BIT_D1_REG CYREG_B1_UDB04_05_D1
#define Counter_1_CounterUDB_sC24_counterdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define Counter_1_CounterUDB_sC24_counterdp_u0__16BIT_F0_REG CYREG_B1_UDB04_05_F0
#define Counter_1_CounterUDB_sC24_counterdp_u0__16BIT_F1_REG CYREG_B1_UDB04_05_F1
#define Counter_1_CounterUDB_sC24_counterdp_u0__A0_A1_REG CYREG_B1_UDB04_A0_A1
#define Counter_1_CounterUDB_sC24_counterdp_u0__A0_REG CYREG_B1_UDB04_A0
#define Counter_1_CounterUDB_sC24_counterdp_u0__A1_REG CYREG_B1_UDB04_A1
#define Counter_1_CounterUDB_sC24_counterdp_u0__D0_D1_REG CYREG_B1_UDB04_D0_D1
#define Counter_1_CounterUDB_sC24_counterdp_u0__D0_REG CYREG_B1_UDB04_D0
#define Counter_1_CounterUDB_sC24_counterdp_u0__D1_REG CYREG_B1_UDB04_D1
#define Counter_1_CounterUDB_sC24_counterdp_u0__DP_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define Counter_1_CounterUDB_sC24_counterdp_u0__F0_F1_REG CYREG_B1_UDB04_F0_F1
#define Counter_1_CounterUDB_sC24_counterdp_u0__F0_REG CYREG_B1_UDB04_F0
#define Counter_1_CounterUDB_sC24_counterdp_u0__F1_REG CYREG_B1_UDB04_F1
#define Counter_1_CounterUDB_sC24_counterdp_u1__16BIT_A0_REG CYREG_B1_UDB05_06_A0
#define Counter_1_CounterUDB_sC24_counterdp_u1__16BIT_A1_REG CYREG_B1_UDB05_06_A1
#define Counter_1_CounterUDB_sC24_counterdp_u1__16BIT_D0_REG CYREG_B1_UDB05_06_D0
#define Counter_1_CounterUDB_sC24_counterdp_u1__16BIT_D1_REG CYREG_B1_UDB05_06_D1
#define Counter_1_CounterUDB_sC24_counterdp_u1__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB05_06_ACTL
#define Counter_1_CounterUDB_sC24_counterdp_u1__16BIT_F0_REG CYREG_B1_UDB05_06_F0
#define Counter_1_CounterUDB_sC24_counterdp_u1__16BIT_F1_REG CYREG_B1_UDB05_06_F1
#define Counter_1_CounterUDB_sC24_counterdp_u1__A0_A1_REG CYREG_B1_UDB05_A0_A1
#define Counter_1_CounterUDB_sC24_counterdp_u1__A0_REG CYREG_B1_UDB05_A0
#define Counter_1_CounterUDB_sC24_counterdp_u1__A1_REG CYREG_B1_UDB05_A1
#define Counter_1_CounterUDB_sC24_counterdp_u1__D0_D1_REG CYREG_B1_UDB05_D0_D1
#define Counter_1_CounterUDB_sC24_counterdp_u1__D0_REG CYREG_B1_UDB05_D0
#define Counter_1_CounterUDB_sC24_counterdp_u1__D1_REG CYREG_B1_UDB05_D1
#define Counter_1_CounterUDB_sC24_counterdp_u1__DP_AUX_CTL_REG CYREG_B1_UDB05_ACTL
#define Counter_1_CounterUDB_sC24_counterdp_u1__F0_F1_REG CYREG_B1_UDB05_F0_F1
#define Counter_1_CounterUDB_sC24_counterdp_u1__F0_REG CYREG_B1_UDB05_F0
#define Counter_1_CounterUDB_sC24_counterdp_u1__F1_REG CYREG_B1_UDB05_F1
#define Counter_1_CounterUDB_sC24_counterdp_u1__MSK_DP_AUX_CTL_REG CYREG_B1_UDB05_MSK_ACTL
#define Counter_1_CounterUDB_sC24_counterdp_u1__PER_DP_AUX_CTL_REG CYREG_B1_UDB05_MSK_ACTL
#define Counter_1_CounterUDB_sC24_counterdp_u2__16BIT_A0_REG CYREG_B1_UDB06_07_A0
#define Counter_1_CounterUDB_sC24_counterdp_u2__16BIT_A1_REG CYREG_B1_UDB06_07_A1
#define Counter_1_CounterUDB_sC24_counterdp_u2__16BIT_D0_REG CYREG_B1_UDB06_07_D0
#define Counter_1_CounterUDB_sC24_counterdp_u2__16BIT_D1_REG CYREG_B1_UDB06_07_D1
#define Counter_1_CounterUDB_sC24_counterdp_u2__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define Counter_1_CounterUDB_sC24_counterdp_u2__16BIT_F0_REG CYREG_B1_UDB06_07_F0
#define Counter_1_CounterUDB_sC24_counterdp_u2__16BIT_F1_REG CYREG_B1_UDB06_07_F1
#define Counter_1_CounterUDB_sC24_counterdp_u2__A0_A1_REG CYREG_B1_UDB06_A0_A1
#define Counter_1_CounterUDB_sC24_counterdp_u2__A0_REG CYREG_B1_UDB06_A0
#define Counter_1_CounterUDB_sC24_counterdp_u2__A1_REG CYREG_B1_UDB06_A1
#define Counter_1_CounterUDB_sC24_counterdp_u2__D0_D1_REG CYREG_B1_UDB06_D0_D1
#define Counter_1_CounterUDB_sC24_counterdp_u2__D0_REG CYREG_B1_UDB06_D0
#define Counter_1_CounterUDB_sC24_counterdp_u2__D1_REG CYREG_B1_UDB06_D1
#define Counter_1_CounterUDB_sC24_counterdp_u2__DP_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define Counter_1_CounterUDB_sC24_counterdp_u2__F0_F1_REG CYREG_B1_UDB06_F0_F1
#define Counter_1_CounterUDB_sC24_counterdp_u2__F0_REG CYREG_B1_UDB06_F0
#define Counter_1_CounterUDB_sC24_counterdp_u2__F1_REG CYREG_B1_UDB06_F1
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB05_06_ACTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB05_06_CTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB05_06_CTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB05_06_CTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB05_06_CTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_MASK_REG CYREG_B1_UDB05_06_MSK
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB05_06_MSK
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB05_06_MSK
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB05_06_MSK
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__7__MASK 0x80u
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__7__POS 7
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B1_UDB05_ACTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__CONTROL_REG CYREG_B1_UDB05_CTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__CONTROL_ST_REG CYREG_B1_UDB05_ST_CTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__COUNT_REG CYREG_B1_UDB05_CTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__COUNT_ST_REG CYREG_B1_UDB05_ST_CTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__MASK 0x80u
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB05_MSK_ACTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB05_MSK_ACTL
#define Counter_1_CounterUDB_sCTRLReg_ctrlreg__PERIOD_REG CYREG_B1_UDB05_MSK
#define Counter_1_CounterUDB_sSTSReg_stsreg__0__MASK 0x01u
#define Counter_1_CounterUDB_sSTSReg_stsreg__0__POS 0
#define Counter_1_CounterUDB_sSTSReg_stsreg__1__MASK 0x02u
#define Counter_1_CounterUDB_sSTSReg_stsreg__1__POS 1
#define Counter_1_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define Counter_1_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_REG CYREG_B1_UDB06_07_ST
#define Counter_1_CounterUDB_sSTSReg_stsreg__2__MASK 0x04u
#define Counter_1_CounterUDB_sSTSReg_stsreg__2__POS 2
#define Counter_1_CounterUDB_sSTSReg_stsreg__5__MASK 0x20u
#define Counter_1_CounterUDB_sSTSReg_stsreg__5__POS 5
#define Counter_1_CounterUDB_sSTSReg_stsreg__6__MASK 0x40u
#define Counter_1_CounterUDB_sSTSReg_stsreg__6__POS 6
#define Counter_1_CounterUDB_sSTSReg_stsreg__MASK 0x67u
#define Counter_1_CounterUDB_sSTSReg_stsreg__MASK_REG CYREG_B1_UDB06_MSK
#define Counter_1_CounterUDB_sSTSReg_stsreg__STATUS_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define Counter_1_CounterUDB_sSTSReg_stsreg__STATUS_REG CYREG_B1_UDB06_ST

/* VoltInput */
#define VoltInput__0__INTTYPE CYREG_PICU6_INTTYPE5
#define VoltInput__0__MASK 0x20u
#define VoltInput__0__PC CYREG_PRT6_PC5
#define VoltInput__0__PORT 6u
#define VoltInput__0__SHIFT 5u
#define VoltInput__AG CYREG_PRT6_AG
#define VoltInput__AMUX CYREG_PRT6_AMUX
#define VoltInput__BIE CYREG_PRT6_BIE
#define VoltInput__BIT_MASK CYREG_PRT6_BIT_MASK
#define VoltInput__BYP CYREG_PRT6_BYP
#define VoltInput__CTL CYREG_PRT6_CTL
#define VoltInput__DM0 CYREG_PRT6_DM0
#define VoltInput__DM1 CYREG_PRT6_DM1
#define VoltInput__DM2 CYREG_PRT6_DM2
#define VoltInput__DR CYREG_PRT6_DR
#define VoltInput__INP_DIS CYREG_PRT6_INP_DIS
#define VoltInput__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU6_BASE
#define VoltInput__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define VoltInput__LCD_EN CYREG_PRT6_LCD_EN
#define VoltInput__MASK 0x20u
#define VoltInput__PORT 6u
#define VoltInput__PRT CYREG_PRT6_PRT
#define VoltInput__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define VoltInput__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define VoltInput__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define VoltInput__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define VoltInput__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define VoltInput__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define VoltInput__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define VoltInput__PS CYREG_PRT6_PS
#define VoltInput__SHIFT 5u
#define VoltInput__SLW CYREG_PRT6_SLW

/* CounterISR */
#define CounterISR__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define CounterISR__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define CounterISR__INTC_MASK 0x01u
#define CounterISR__INTC_NUMBER 0u
#define CounterISR__INTC_PRIOR_NUM 7u
#define CounterISR__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define CounterISR__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define CounterISR__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 36000000U
#define BCLK__BUS_CLK__KHZ 36000U
#define BCLK__BUS_CLK__MHZ 36U
#define CY_PROJECT_NAME "VoltageDisplay_SAR_ADC"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
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
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 0
#define CYDEV_CONFIGURATION_DMA 1
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_DMA
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 4096
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 16384
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDIO0 3.3
#define CYDEV_VDDIO0_MV 3300
#define CYDEV_VDDIO1 3.3
#define CYDEV_VDDIO1_MV 3300
#define CYDEV_VDDIO2 3.3
#define CYDEV_VDDIO2_MV 3300
#define CYDEV_VDDIO3 3.3
#define CYDEV_VDDIO3_MV 3300
#define CYDEV_VIO0 3.3
#define CYDEV_VIO0_MV 3300
#define CYDEV_VIO1 3.3
#define CYDEV_VIO1_MV 3300
#define CYDEV_VIO2 3.3
#define CYDEV_VIO2_MV 3300
#define CYDEV_VIO3 3.3
#define CYDEV_VIO3_MV 3300
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define CyScBoostClk__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define CyScBoostClk__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define CyScBoostClk__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define CyScBoostClk__CFG2_SRC_SEL_MASK 0x07u
#define CyScBoostClk__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define CyScBoostClk__CFG3_PHASE_DLY_MASK 0x0Fu
#define CyScBoostClk__INDEX 0x00u
#define CyScBoostClk__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define CyScBoostClk__PM_ACT_MSK 0x01u
#define CyScBoostClk__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define CyScBoostClk__PM_STBY_MSK 0x01u
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */