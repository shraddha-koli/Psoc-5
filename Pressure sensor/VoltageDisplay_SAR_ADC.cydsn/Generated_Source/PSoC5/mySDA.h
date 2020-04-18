/*******************************************************************************
* File Name: mySDA.h  
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

#if !defined(CY_PINS_mySDA_H) /* Pins mySDA_H */
#define CY_PINS_mySDA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "mySDA_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 mySDA__PORT == 15 && ((mySDA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    mySDA_Write(uint8 value);
void    mySDA_SetDriveMode(uint8 mode);
uint8   mySDA_ReadDataReg(void);
uint8   mySDA_Read(void);
void    mySDA_SetInterruptMode(uint16 position, uint16 mode);
uint8   mySDA_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the mySDA_SetDriveMode() function.
     *  @{
     */
        #define mySDA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define mySDA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define mySDA_DM_RES_UP          PIN_DM_RES_UP
        #define mySDA_DM_RES_DWN         PIN_DM_RES_DWN
        #define mySDA_DM_OD_LO           PIN_DM_OD_LO
        #define mySDA_DM_OD_HI           PIN_DM_OD_HI
        #define mySDA_DM_STRONG          PIN_DM_STRONG
        #define mySDA_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define mySDA_MASK               mySDA__MASK
#define mySDA_SHIFT              mySDA__SHIFT
#define mySDA_WIDTH              1u

/* Interrupt constants */
#if defined(mySDA__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in mySDA_SetInterruptMode() function.
     *  @{
     */
        #define mySDA_INTR_NONE      (uint16)(0x0000u)
        #define mySDA_INTR_RISING    (uint16)(0x0001u)
        #define mySDA_INTR_FALLING   (uint16)(0x0002u)
        #define mySDA_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define mySDA_INTR_MASK      (0x01u) 
#endif /* (mySDA__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define mySDA_PS                     (* (reg8 *) mySDA__PS)
/* Data Register */
#define mySDA_DR                     (* (reg8 *) mySDA__DR)
/* Port Number */
#define mySDA_PRT_NUM                (* (reg8 *) mySDA__PRT) 
/* Connect to Analog Globals */                                                  
#define mySDA_AG                     (* (reg8 *) mySDA__AG)                       
/* Analog MUX bux enable */
#define mySDA_AMUX                   (* (reg8 *) mySDA__AMUX) 
/* Bidirectional Enable */                                                        
#define mySDA_BIE                    (* (reg8 *) mySDA__BIE)
/* Bit-mask for Aliased Register Access */
#define mySDA_BIT_MASK               (* (reg8 *) mySDA__BIT_MASK)
/* Bypass Enable */
#define mySDA_BYP                    (* (reg8 *) mySDA__BYP)
/* Port wide control signals */                                                   
#define mySDA_CTL                    (* (reg8 *) mySDA__CTL)
/* Drive Modes */
#define mySDA_DM0                    (* (reg8 *) mySDA__DM0) 
#define mySDA_DM1                    (* (reg8 *) mySDA__DM1)
#define mySDA_DM2                    (* (reg8 *) mySDA__DM2) 
/* Input Buffer Disable Override */
#define mySDA_INP_DIS                (* (reg8 *) mySDA__INP_DIS)
/* LCD Common or Segment Drive */
#define mySDA_LCD_COM_SEG            (* (reg8 *) mySDA__LCD_COM_SEG)
/* Enable Segment LCD */
#define mySDA_LCD_EN                 (* (reg8 *) mySDA__LCD_EN)
/* Slew Rate Control */
#define mySDA_SLW                    (* (reg8 *) mySDA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define mySDA_PRTDSI__CAPS_SEL       (* (reg8 *) mySDA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define mySDA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) mySDA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define mySDA_PRTDSI__OE_SEL0        (* (reg8 *) mySDA__PRTDSI__OE_SEL0) 
#define mySDA_PRTDSI__OE_SEL1        (* (reg8 *) mySDA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define mySDA_PRTDSI__OUT_SEL0       (* (reg8 *) mySDA__PRTDSI__OUT_SEL0) 
#define mySDA_PRTDSI__OUT_SEL1       (* (reg8 *) mySDA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define mySDA_PRTDSI__SYNC_OUT       (* (reg8 *) mySDA__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(mySDA__SIO_CFG)
    #define mySDA_SIO_HYST_EN        (* (reg8 *) mySDA__SIO_HYST_EN)
    #define mySDA_SIO_REG_HIFREQ     (* (reg8 *) mySDA__SIO_REG_HIFREQ)
    #define mySDA_SIO_CFG            (* (reg8 *) mySDA__SIO_CFG)
    #define mySDA_SIO_DIFF           (* (reg8 *) mySDA__SIO_DIFF)
#endif /* (mySDA__SIO_CFG) */

/* Interrupt Registers */
#if defined(mySDA__INTSTAT)
    #define mySDA_INTSTAT            (* (reg8 *) mySDA__INTSTAT)
    #define mySDA_SNAP               (* (reg8 *) mySDA__SNAP)
    
	#define mySDA_0_INTTYPE_REG 		(* (reg8 *) mySDA__0__INTTYPE)
#endif /* (mySDA__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_mySDA_H */


/* [] END OF FILE */
