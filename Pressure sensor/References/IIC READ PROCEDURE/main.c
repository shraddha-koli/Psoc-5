#include <reg52.h>
#include <math.h>
#define DELAY_TIME 60
#define TRUE 1
#define FALSE 0
#define uchar unsigned char
#define uint unsigned int

sbit SCL = P1 ^ 7;   //I2C信号线定义
sbit SDA = P1 ^ 6;   //I2C数据线定义
sbit Max7219_pinCLK = P2 ^ 2;		//定义Max7219端口
sbit Max7219_pinCS = P2 ^ 1;
sbit Max7219_pinDIN = P2 ^ 0;

void DELAY(uint t)   //延时函数
{
    while (t != 0)
        t--;
}
void I2C_Start(void)  //启动I2C总线，当SCL为高电平时使SDA产生一个下降沿
{
    SDA = 1;
    SCL = 1;
    DELAY(DELAY_TIME);
    SDA = 0;
    DELAY(DELAY_TIME);
    SCL = 0;
    DELAY(DELAY_TIME);
}

void I2C_Stop(void)  //终止I2C总线，当SCL为高电平时使SDA产生一个上升沿
{
    SDA = 0;
    SCL = 1;
    DELAY(DELAY_TIME);
    SDA = 1;
    DELAY(DELAY_TIME);
    SCL = 0;
    DELAY(DELAY_TIME);
}

void SEND_0(void)  //发送0
{
    SDA = 0;
    SCL = 1;
    DELAY(DELAY_TIME);
    SCL = 0;
    DELAY(DELAY_TIME);
}

void SEND_1(void)   //发送1
{

    SDA = 1;
    SCL = 1;
    DELAY(DELAY_TIME);
    SCL = 0;
    DELAY(DELAY_TIME);
}

bit Check_Acknowledge(void)   //发送一个字节后检验设备的应答信号
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

void WriteI2CByte(uchar b) reentrant   //向I2C总线写入一个字节
{

    char i;
    for (i = 0; i < 8; i++)
        if ((b << i) & 0x80)
            SEND_1();
        else
            SEND_0();
}

uchar ReadI2CByte(void) reentrant    //从I2C总线读一个字节
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

void Write_One_Byte(uchar addr, uchar thedata)  //向从设备写一个字节
{
    bit acktemp = 1;
    I2C_Start();                          //总线开始
    WriteI2CByte(0xDA);                   //从设备通讯地址
    acktemp = Check_Acknowledge();        //检验应答信号
    WriteI2CByte(addr); /*address*/       //向address首地址开始写入数据
    acktemp = Check_Acknowledge();        //
    WriteI2CByte(thedata); /*thedata*/    //写入thedata
    acktemp = Check_Acknowledge();
    I2C_Stop();                           //总线停止
}

uchar Read_One_Byte(uchar addr)    //从从设备读一个字节
{
    bit acktemp = 1;
    uchar mydata;

    I2C_Start();//总线开始
    WriteI2CByte(0xDA);//向I2C总线写一个字节
    acktemp = Check_Acknowledge();
    WriteI2CByte(addr);  //向I2C总线写一个字节，addr是地址
    acktemp = Check_Acknowledge();
    I2C_Start();
    WriteI2CByte(0xDB);
    acktemp = Check_Acknowledge();
    mydata = ReadI2CByte();
    acktemp = Check_Acknowledge();
    I2C_Stop();//停止I2C总线
    return mydata;
}
void Delay_xms(uint x)  //x毫秒延时程序
{
    uint i, j;
    for (i = 0; i < x; i++)
        for (j = 0; j < 112; j++)
            ;
}

void Write_Max7219_byte(uchar DATA)  //向MAX7219写入字节
{
    uchar i;
    Max7219_pinCS = 0;     	//CS=0有效，CS=1锁存
    for (i = 8; i >= 1; i--)
    {
        Max7219_pinCLK = 0;
        Max7219_pinDIN = DATA & 0x80;  //&10000000, 编译器对位操作的理解:非0即为1
        DATA = DATA << 1;
        Max7219_pinCLK = 1;				//上升沿把数据发送出去
    }
}

void Write_Max7219(uchar address, uchar dat)  //向Max7219写入数据
{
    Max7219_pinCS = 0;
    Write_Max7219_byte(address);   //写入地址
    Write_Max7219_byte(dat);    //写入数据，即数码管显示数字
    Max7219_pinCS = 1;
}

void Init_MAX7219(void)     //初始化芯片
{
    Write_Max7219(0x09, 0xff);   //译码方式：BCD码
    Write_Max7219(0x0a, 0x03);   //亮度
    Write_Max7219(0x0b, 0x07);   //扫描界限：8个数码管显示
    Write_Max7219(0x0c, 0x01);   //掉电模式：0，普通模式：1
    Write_Max7219(0x0f, 0x01);   //显示测试：1；测试结束，正常显示：0
}
void main(void)
{
    uchar yali1, yali2, yali3，wendu1,wendu2;
    uchar temp_a5;
    long int ad,temp;
    long float pas;
    uchar dis[8];
    Init_MAX7219();     //初始化
    Delay_xms(1000);	
    Write_Max7219(0x0f, 0x00);				//显示测试写入00000000，显示清零
    while (1)
    {

        temp_a5 = Read_One_Byte(0xA5);//芯片内部配置
        temp_a5 = temp_a5 & 0xFD;     
        Write_One_Byte(0xA5, temp_a5); //设置传感器芯片输出校准数据
        Write_One_Byte(0x30, 0x0A); //设置组合采集模式，开始数据采集 （一次温度采集后立即执行一次压力采集）
        while ((Read_One_Byte(0x30) & 0x08) > 0);  //判断数据采集是否就绪
        
			  yali1 = Read_One_Byte(0x06);
        yali2 = Read_One_Byte(0x07);
        yali3 = Read_One_Byte(0x08);	//读取芯片24位ADC储存校准后的值

        ad = yali1 * 65536 + yali2 * 256 + yali3;//ad即为24位校准值
       
			 wendu1= Read_One_Byte(0x09);
			 wendu2= Read_One_Byte(0x0a);
			 temp=wendu1*256+wendu2;    //读取温度值
			
     /*根据量程换算压力，以下是40kpa的量程计算公式*/
			
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
        Write_Max7219(1, dis[7]);		  //显示压力值
        Delay_xms(100);		//延时100ms
    }
}

