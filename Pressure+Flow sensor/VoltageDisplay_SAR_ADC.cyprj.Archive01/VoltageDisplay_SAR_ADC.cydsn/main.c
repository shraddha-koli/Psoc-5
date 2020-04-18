/******************************************************************************
* File Name: Main.c
*
* Version 1.1
*
* Description:
* This file contains the main function for the voltage Display test.
*
* Note:
*
* Code tested with:
* PSoC Creator: 3.0
* Device Tested With: CY8C5868AXI-LP035
* Compiler    : ARMGCC 4.4.1, ARM RVDS Generic, ARM MDK Generic
*
********************************************************************************
* Copyright (2013), Cypress Semiconductor Corporation. All Rights Reserved.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress)
* and is protected by and subject to worldwide patent protection (United
* States and foreign), United States copyright laws and international treaty
* provisions. Cypress hereby grants to licensee a personal, non-exclusive,
* non-transferable license to copy, use, modify, create derivative works of,
* and compile the Cypress Source Code and derivative works for the sole
* purpose of creating custom software in support of licensee product to be
* used only in conjunction with a Cypress integrated circuit as specified in
* the applicable agreement. Any reproduction, modification, translation,
* compilation, or representation of this software except as specified above 
* is prohibited without the express written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH 
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the 
* materials described herein. Cypress does not assume any liability arising out 
* of the application or use of any product or circuit described herein. Cypress 
* does not authorize its products for use as critical components in life-support 
* systems where a malfunction or failure may reasonably be expected to result in 
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of 
* such use and in doing so indemnifies Cypress against all charges. 
*
* Use of this Software may be limited by and subject to the applicable Cypress
* software license agreement. 
*******************************************************************************/

/******************************************************************************
*                           THEORY OF OPERATION
* This project demonstrates how ADC is used to read the input voltage at 
* it's input and display it on the LCD.
* 
* The Potentiometer is connected to the input of the SAR ADC. ADC is 
* configured with 12 bit of resolution to measure the input voltage with 
* higher accuracy. ADC count is converted back to micro volts and 8 samples are 
* collected. After that the average of 8 samples is calculated and displayed
* on the LCD. 
*
* Hardware connection on the Kit
* Potentiometer - PORT 6[5] 
* LCD - PORT 2[0..6]
*******************************************************************************/
#include <device.h>
#include "stdio.h"

#define MAX_SAMPLE                  8

#include <math.h>
#define DELAY_TIME 60
#define TRUE 1
#define FALSE 0
#define uchar unsigned char
#define uint unsigned int

#include "pthread.h"
void DELAY(uint t)   //��ʱ����
{
    while (t != 0)
        t--;
}
void I2C_Start(void)  //����I2C���ߣ���SCLΪ�ߵ�ƽʱʹSDA����һ���½���
{

    mySDA_Write(1);
    mySCL_Write(1);
    DELAY(DELAY_TIME);
    mySDA_Write(0);
    DELAY(DELAY_TIME);
    mySCL_Write(0);
    DELAY(DELAY_TIME);
}

void I2C_Stop(void)  //��ֹI2C���ߣ���SCLΪ�ߵ�ƽʱʹSDA����һ��������
{
    mySDA_Write(0);
    mySCL_Write(1);
    DELAY(DELAY_TIME);
    mySDA_Write(1);
    DELAY(DELAY_TIME);
    mySCL_Write(0);
    DELAY(DELAY_TIME);
}

void SEND_0(void)  //����0
{
    mySDA_Write(0);
    mySCL_Write(1);
    DELAY(DELAY_TIME);
    mySCL_Write(0);
    DELAY(DELAY_TIME);
}

void SEND_1(void)   //����1
{

    mySDA_Write(1);
    mySCL_Write(1);
    DELAY(DELAY_TIME);
    mySCL_Write(0);
    DELAY(DELAY_TIME);
}

int Check_Acknowledge(void)   //����һ���ֽں�����豸��Ӧ���ź�
{

    mySDA_Write(1);
    mySCL_Write(1);
    DELAY(DELAY_TIME / 2);
    uint8_t F0 = mySDA_Read();
    DELAY(DELAY_TIME / 2);
    mySCL_Write(0);
    DELAY(DELAY_TIME);
    if (F0 == 1)
        return FALSE;
    return TRUE;
}

void WriteI2CByte(uchar b)    //��I2C����д��һ���ֽ�
{

    char i;
    for (i = 0; i < 8; i++)
        if ((b << i) & 0x80)
            SEND_1();
        else
            SEND_0();
}

uchar ReadI2CByte(void)     //��I2C���߶�һ���ֽ�
{

    char b = 0, i;
    for (i = 0; i < 8; i++)
    {
        mySDA_Write(1);
        mySCL_Write(1);
        DELAY(5);
        uint8_t F0 = mySDA_Read();
        DELAY(5);
        mySCL_Write(0);
        if (F0 == 1)
        {
            b = b << 1;
            b = b | 0x01;
        }
        else
            b = b << 1;
    }
    return b;
}

void Write_One_Byte(uchar addr, uchar thedata)  //����豸дһ���ֽ�
{
    int acktemp = 1;
    I2C_Start();                          //���߿�ʼ
    WriteI2CByte(0xDA);                   //���豸ͨѶ��ַ
    acktemp = Check_Acknowledge();        //����Ӧ���ź�
    WriteI2CByte(addr); /*address*/       //��address�׵�ַ��ʼд������
    acktemp = Check_Acknowledge();        //
    WriteI2CByte(thedata); /*thedata*/    //д��thedata
    acktemp = Check_Acknowledge();
    I2C_Stop();                           //����ֹͣ
}

uchar Read_One_Byte(uchar addr)    //�Ӵ��豸��һ���ֽ�
{
    int acktemp = 1;
    uchar mydata;

    I2C_Start();//���߿�ʼ
    WriteI2CByte(0xDA);//��I2C����дһ���ֽ�
    acktemp = Check_Acknowledge();
    WriteI2CByte(addr);  //��I2C����дһ���ֽڣ�addr�ǵ�ַ
    acktemp = Check_Acknowledge();
    I2C_Start();
    WriteI2CByte(0xDB);
    acktemp = Check_Acknowledge();
    mydata = ReadI2CByte();
    acktemp = Check_Acknowledge();
    I2C_Stop();//ֹͣI2C����
    return mydata;
}
void Delay_xms(uint x)  //x������ʱ����
{
    uint i, j;
    for (i = 0; i < x; i++)
        for (j = 0; j < 112; j++)
            ;
}

int main(void)
{
    /* Variable to hold ADC count */
    int32 voltCount = 0;
    
    /* Variable to hold the result in millivolts converted from ADC counts */
    int32 mVolts = 0;

    /* Variable to count number of samples collected from ADC */
    uint8 sampleCount = 0;
	
    /* Variable to hold cumulative samples */
    int32 voltSamples = 0;
	
    /* Variable to hold the average volts for 8 samples */
    uint32 averageVolts = 0;
	
    /* Character array to hold the micro volts*/
    char displayStr[15] = {'\0'};
    
    CYGlobalIntEnable;
    
    /* Start ADC and start conversion */
    ADC_Start();
    ADC_StartConvert();

    /* Start LCD and set position */
    LCD_Start();
   
    
    uchar yali1, yali2, yali3;
    uchar temp_a5;
    long int ad,temp;
     int pas;
    uchar dis[8];
  //  CharLCD_1_Start();
    Counter_1_Start();
   
	/* Enable Global interrupts */
    CyGlobalIntEnable;

   // CharLCD_1_ClearDisplay();  
    
    while(1)
    {
         temp_a5 = Read_One_Byte(0xA5);//оƬ�ڲ�����
        temp_a5 = temp_a5 & 0xFD;     
        Write_One_Byte(0xA5, temp_a5); //���ô�����оƬ���У׼����
        Write_One_Byte(0x30, 0x0A); //������ϲɼ�ģʽ����ʼ���ݲɼ� ��һ���¶Ȳɼ�������ִ��һ��ѹ���ɼ���
        while ((Read_One_Byte(0x30) & 0x08) > 0);  //�ж����ݲɼ��Ƿ����
        
			  yali1 = Read_One_Byte(0x06);
        yali2 = Read_One_Byte(0x07);
        yali3 = Read_One_Byte(0x08);	//��ȡоƬ24λADC����У׼���ֵ

        ad = yali1 * 65536 + yali2 * 256 + yali3;
        	if (ad > 8388608)
        {
            pas = (ad - 16777216) * 0.00390625;
        }
        else
        {
            pas = ad *0.00390625 ;
        }
        if (pas < 0)
            pas = fabs(pas);
        CyDelay(1000);
       
        sprintf(displayStr,"%d Pascal", pas);
               // LCD_ClearDisplay();
        LCD_Position(0, 0);
        LCD_PrintString("Pressure");
        LCD_Position(0, 10);
        LCD_PrintString(displayStr);
    
        //LCD_ClearDisplay();
        //---------------------Flow Counter code begins --------------------------------------
        
        Counter_1_WriteCounter(0);
        CyDelay(5000);
        //CharLCD_1_Position(0u, 3u);
        uint32_t countPerMin = Counter_1_ReadCounter()*12;   
      //  CharLCD_1_PrintNumber(countPerMin/12); // display rpm
        
         LCD_Position(1, 0);
        LCD_PrintString("Flow ");
    
		LCD_Position(1, 5);
        int lpm = countPerMin/12*0.0025;
        char displayStr[15] = {'\0'};
        sprintf(displayStr, " %d Lpm", lpm );
        LCD_PrintString(displayStr); // display Lpm
        
        
        
        
        
        /* Read ADC count and convert to milli volts */
       /* ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        voltCount = ADC_GetResult16();
        mVolts = ADC_CountsTo_mVolts(voltCount);*/
        
        /* Add the current ADC reading to the cumulated samples*/
        /*voltSamples = voltSamples + mVolts;

        sampleCount++;*/

        /* If 8 samples have been collected then average the samples and update the display*/
       /* if(sampleCount == MAX_SAMPLE)
        {
            averageVolts = voltSamples >> 3;
            voltSamples = 0;
            sampleCount = 0;*/

            /* Convert milli volts to string and display on the LCD. sprintf()
            *  function is standard library function defined in the stdio.h 
            *  header file */
            //sprintf(displayStr,"    %4ld mV",averageVolts);
           /* LCD_Position(1,0);
            LCD_PrintString(displayStr);*/
        //}	
    }
}

/* [] END OF FILE */


