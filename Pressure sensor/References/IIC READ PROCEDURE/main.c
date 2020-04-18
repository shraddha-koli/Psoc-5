#include <reg52.h>
#include <math.h>
#define DELAY_TIME 60
#define TRUE 1
#define FALSE 0
#define uchar unsigned char
#define uint unsigned int

sbit SCL = P1 ^ 7;   //I2C�ź��߶���
sbit SDA = P1 ^ 6;   //I2C�����߶���
sbit Max7219_pinCLK = P2 ^ 2;		//����Max7219�˿�
sbit Max7219_pinCS = P2 ^ 1;
sbit Max7219_pinDIN = P2 ^ 0;

void DELAY(uint t)   //��ʱ����
{
    while (t != 0)
        t--;
}
void I2C_Start(void)  //����I2C���ߣ���SCLΪ�ߵ�ƽʱʹSDA����һ���½���
{
    SDA = 1;
    SCL = 1;
    DELAY(DELAY_TIME);
    SDA = 0;
    DELAY(DELAY_TIME);
    SCL = 0;
    DELAY(DELAY_TIME);
}

void I2C_Stop(void)  //��ֹI2C���ߣ���SCLΪ�ߵ�ƽʱʹSDA����һ��������
{
    SDA = 0;
    SCL = 1;
    DELAY(DELAY_TIME);
    SDA = 1;
    DELAY(DELAY_TIME);
    SCL = 0;
    DELAY(DELAY_TIME);
}

void SEND_0(void)  //����0
{
    SDA = 0;
    SCL = 1;
    DELAY(DELAY_TIME);
    SCL = 0;
    DELAY(DELAY_TIME);
}

void SEND_1(void)   //����1
{

    SDA = 1;
    SCL = 1;
    DELAY(DELAY_TIME);
    SCL = 0;
    DELAY(DELAY_TIME);
}

bit Check_Acknowledge(void)   //����һ���ֽں�����豸��Ӧ���ź�
{

    SDA = 1;
    SCL = 1;
    DELAY(DELAY_TIME / 2);
    F0 = SDA;
    DELAY(DELAY_TIME / 2);
    SCL = 0;
    DELAY(DELAY_TIME);
    if (F0 == 1)
        return FALSE;
    return TRUE;
}

void WriteI2CByte(uchar b) reentrant   //��I2C����д��һ���ֽ�
{

    char i;
    for (i = 0; i < 8; i++)
        if ((b << i) & 0x80)
            SEND_1();
        else
            SEND_0();
}

uchar ReadI2CByte(void) reentrant    //��I2C���߶�һ���ֽ�
{

    char b = 0, i;
    for (i = 0; i < 8; i++)
    {
        SDA = 1;
        SCL = 1;
        DELAY(10);
        F0 = SDA;
        DELAY(10);
        SCL = 0;
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
    bit acktemp = 1;
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
    bit acktemp = 1;
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

void Write_Max7219_byte(uchar DATA)  //��MAX7219д���ֽ�
{
    uchar i;
    Max7219_pinCS = 0;     	//CS=0��Ч��CS=1����
    for (i = 8; i >= 1; i--)
    {
        Max7219_pinCLK = 0;
        Max7219_pinDIN = DATA & 0x80;  //&10000000, ��������λ���������:��0��Ϊ1
        DATA = DATA << 1;
        Max7219_pinCLK = 1;				//�����ذ����ݷ��ͳ�ȥ
    }
}

void Write_Max7219(uchar address, uchar dat)  //��Max7219д������
{
    Max7219_pinCS = 0;
    Write_Max7219_byte(address);   //д���ַ
    Write_Max7219_byte(dat);    //д�����ݣ����������ʾ����
    Max7219_pinCS = 1;
}

void Init_MAX7219(void)     //��ʼ��оƬ
{
    Write_Max7219(0x09, 0xff);   //���뷽ʽ��BCD��
    Write_Max7219(0x0a, 0x03);   //����
    Write_Max7219(0x0b, 0x07);   //ɨ����ޣ�8���������ʾ
    Write_Max7219(0x0c, 0x01);   //����ģʽ��0����ͨģʽ��1
    Write_Max7219(0x0f, 0x01);   //��ʾ���ԣ�1�����Խ�����������ʾ��0
}
void main(void)
{
    uchar yali1, yali2, yali3��wendu1,wendu2;
    uchar temp_a5;
    long int ad,temp;
    long float pas;
    uchar dis[8];
    Init_MAX7219();     //��ʼ��
    Delay_xms(1000);	
    Write_Max7219(0x0f, 0x00);				//��ʾ����д��00000000����ʾ����
    while (1)
    {

        temp_a5 = Read_One_Byte(0xA5);//оƬ�ڲ�����
        temp_a5 = temp_a5 & 0xFD;     
        Write_One_Byte(0xA5, temp_a5); //���ô�����оƬ���У׼����
        Write_One_Byte(0x30, 0x0A); //������ϲɼ�ģʽ����ʼ���ݲɼ� ��һ���¶Ȳɼ�������ִ��һ��ѹ���ɼ���
        while ((Read_One_Byte(0x30) & 0x08) > 0);  //�ж����ݲɼ��Ƿ����
        
			  yali1 = Read_One_Byte(0x06);
        yali2 = Read_One_Byte(0x07);
        yali3 = Read_One_Byte(0x08);	//��ȡоƬ24λADC����У׼���ֵ

        ad = yali1 * 65536 + yali2 * 256 + yali3;//ad��Ϊ24λУ׼ֵ
       
			 wendu1= Read_One_Byte(0x09);
			 wendu2= Read_One_Byte(0x0a);
			 temp=wendu1*256+wendu2;    //��ȡ�¶�ֵ
			
     /*�������̻���ѹ����������40kpa�����̼��㹫ʽ*/
			
			if (ad > 8388608)
        {
            pas = (ad - 16777216) * 0.0078125;
        }
        else
        {
            pas = ad * 0.0078125;
        }
        if (pas < 0)
            pas = fabs(pas);
        dis[0] = (long int)pas / 10000000;
        dis[1] = (long int)pas % 10000000 / 1000000;
        dis[2] = (long int)pas % 1000000 / 100000;
        dis[3] = (long int)pas % 100000 / 10000;
        dis[4] = (long int)pas % 10000 / 1000;
        dis[5] = (long int)pas % 1000 / 100;
        dis[6] = (long int)pas % 100 / 10;
        dis[7] = (long int)pas % 10;
        Write_Max7219(8, dis[0]);
        Write_Max7219(7, dis[1]);
        Write_Max7219(6, dis[2]);
        Write_Max7219(5, dis[3]);
        Write_Max7219(4, dis[4]);
        Write_Max7219(3, dis[5]);
        Write_Max7219(2, dis[6]);
        Write_Max7219(1, dis[7]);		  //��ʾѹ��ֵ
        Delay_xms(100);		//��ʱ100ms
    }
}

