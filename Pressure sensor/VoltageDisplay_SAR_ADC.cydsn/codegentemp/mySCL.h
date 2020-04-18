/*******************************************************************************
* File Name: mySCL.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_mySCL_H) /* Pins mySCL_H */
#define CY_PINS_mySCL_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "mySCL_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 mySCL__PORT == 15 && ((mySCL__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    mySCL_Write(uint8 value);
void    mySCL_SetDriveMode(uint8 mode);
uint8   mySCL_ReadDataReg(void);
uint8   mySCL_Read(void);
void    mySCL_SetInterruptMode(uint16 position, uint16 mode);
uint8   mySCL_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the mySCL_SetDriveMode() function.
     *  @{
     */
        #define mySCL_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define mySCL_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define mySCL_DM_RES_UP          PIN_DM_RES_UP
        #define mySCL_DM_RES_DWN         PIN_DM_RES_DWN
        #define mySCL_DM_OD_LO           PIN_DM_OD_LO
        #define mySCL_DM_OD_HI           PIN_DM_OD_HI
        #define mySCL_DM_STRONG          PIN_DM_STRONG
        #define mySCL_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define mySCL_MASK               mySCL__MASK
#define mySCL_SHIFT              mySCL__SHIFT
#define mySCL_WIDTH              1u

/* Interrupt constants */
#if defined(mySCL__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in mySCL_SetInterruptMode() function.
     *  @{
     */
        #define mySCL_INTR_NONE      (uint16)(0x0000u)
        #define mySCL_INTR_RISING    (uint16)(0x0001u)
        #define mySCL_INTR_FALLING   (uint16)(0x0002u)
        #define mySCL_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define mySCL_INTR_MASK      (0x01u) 
#endif /* (mySCL__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define mySCL_PS                     (* (reg8 *) mySCL__PS)
/* Data Register */
#define mySCL_DR                     (* (reg8 *) mySCL__DR)
/* Port Number */
#define mySCL_PRT_NUM                (* (reg8 *) mySCL__PRT) 
/* Connect to Analog Globals */                                                  
#define mySCL_AG                     (* (reg8 *) mySCL__AG)                       
/* Analog MUX bux enable */
#define mySCL_AMUX                   (* (reg8 *) mySCL__AMUX) 
/* Bidirectional Enable */                                                        
#define mySCL_BIE                    (* (reg8 *) mySCL__BIE)
/* Bit-mask for Aliased Register Access */
#define mySCL_BIT_MASK               (* (reg8 *) mySCL__BIT_MASK)
/* Bypass Enable */
#define mySCL_BYP                    (* (reg8 *) mySCL__BYP)
/* Port wide control signals */                                                   
#define mySCL_CTL                    (* (reg8 *) mySCL__CTL)
/* Drive Modes */
#define mySCL_DM0                    (* (reg8 *) mySCL__DM0) 
#define mySCL_DM1                    (* (reg8 *) mySCL__DM1)
#define mySCL_DM2                    (* (reg8 *) mySCL__DM2) 
/* Input Buffer Disable Override */
#define mySCL_INP_DIS                (* (reg8 *) mySCL__INP_DIS)
/* LCD Common or Segment Drive */
#define mySCL_LCD_COM_SEG            (* (reg8 *) mySCL__LCD_COM_SEG)
/* Enable Segment LCD */
#define mySCL_LCD_EN                 (* (reg8 *) mySCL__LCD_EN)
/* Slew Rate Control */
#define mySCL_SLW                    (* (reg8 *) mySCL__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define mySCL_PRTDSI__CAPS_SEL       (* (reg8 *) mySCL__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define mySCL_PRTDSI__DBL_SYNC_IN    (* (reg8 *) mySCL__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define mySCL_PRTDSI__OE_SEL0        (* (reg8 *) mySCL__PRTDSI__OE_SEL0) 
#define mySCL_PRTDSI__OE_SEL1        (* (reg8 *) mySCL__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define mySCL_PRTDSI__OUT_SEL0       (* (reg8 *) mySCL__PRTDSI__OUT_SEL0) 
#define mySCL_PRTDSI__OUT_SEL1       (* (reg8 *) mySCL__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define mySCL_PRTDSI__SYNC_OUT       (* (reg8 *) mySCL__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(mySCL__SIO_CFG)
    #define mySCL_SIO_HYST_EN        (* (reg8 *) mySCL__SIO_HYST_EN)
    #define mySCL_SIO_REG_HIFREQ     (* (reg8 *) mySCL__SIO_REG_HIFREQ)
    #define mySCL_SIO_CFG            (* (reg8 *) mySCL__SIO_CFG)
    #define mySCL_SIO_DIFF           (* (reg8 *) mySCL__SIO_DIFF)
#endif /* (mySCL__SIO_CFG) */

/* Interrupt Registers */
#if defined(mySCL__INTSTAT)
    #define mySCL_INTSTAT            (* (reg8 *) mySCL__INTSTAT)
    #define mySCL_SNAP               (* (reg8 *) mySCL__SNAP)
    
	#define mySCL_0_INTTYPE_REG 		(* (reg8 *) mySCL__0__INTTYPE)
#endif /* (mySCL__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_mySCL_H */


/* [] END OF FILE */
