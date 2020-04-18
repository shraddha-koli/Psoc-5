/*******************************************************************************
* File: main.c
* 
* Version : 1.10
*
* Description: 
*   This is a source code for basic functionality of Counter.
*
********************************************************************************
* Copyright 2012-2014, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/
#include <project.h>
#include "stdio.h"

uint8 interruptCnt;

/*******************************************************************************
* Interrupt
********************************************************************************
*
* Summary:
*  Reads counter status register
*  Increments interrupt count
* 
*******************************************************************************/
CY_ISR(counterInterrupt)
{
	/* Read Status register in order to clear the sticky Terminal Count (TC) bit 
	 * in the status register. Note that the function is not called, but rather 
	 * the status is read directly.
	 */
   	Counter_1_STATUS;
    
	
	/* Increment the Counter to indicate the keep track of the number of 
     * interrupts received. 
	 */
    interruptCnt++;    
}


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Main function performs following functions:
*   1: Start components
*   2: Enables global interrupts
*	3: Print Period,compare and counter value on LCD
* 
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
    /* Start and assign interrupt handle for interrupt component */
    CounterISR_StartEx(counterInterrupt);

    CharLCD_1_Start();
    Counter_1_Start();
   
	/* Enable Global interrupts */
    CyGlobalIntEnable;

    CharLCD_1_ClearDisplay();

    CharLCD_1_Position(0u, 0u);
    CharLCD_1_PrintString("Rpm:  ");
   
	CharLCD_1_Position(1u, 0u);
    CharLCD_1_PrintString("Flow: ");
    

    
    for(;;)
    {
        Counter_1_WriteCounter(0);
        CyDelay(1000);
        CharLCD_1_Position(0u, 6u);
        uint32_t countPerMin = Counter_1_ReadCounter()*60;
       
        
        CharLCD_1_PrintNumber(countPerMin/12);
        
        
		CharLCD_1_Position(1u, 6u);
        long lpm = countPerMin/12*0.0025;
        char displayStr[15] = {'\0'};
        sprintf(displayStr, "%lu Lpm", lpm );
        CharLCD_1_PrintString(displayStr);
        
        
    }
}


/* [] END OF FILE */
