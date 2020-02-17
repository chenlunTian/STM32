#include "PPM.h"


void PPMIntHandler(void);

void PPM_Init(void)
{

		//配置I/O为上拉
		//配置I/O为下降沿触发

}

uint16_t PPM_Time_Delta=0,PPM_Is_Okay=0;
uint16 PPM_Databuf[8]={0};
uint8_t PPM_Safety_Flag=0;
static uint16_t PPM_Sample_Cnt=0;
static uint16_t PPM_buf[8]={0};
static uint32_t Last_PPM_Time=0,PPM_Time=0;


void PPMIntHandler(void)
{
	Last_PPM_Time=PPM_Time;//系统运行时间获取，单位us
	PPM_Time=micros();//单位us
	PPM_Time_Delta=PPM_Time-Last_PPM_Time;//获取时间间隔
	if(PPM_Is_Okay==1)//PPM解析开始
	{
		if(PPM_Time_Delta>=800&&PPM_Time_Delta<=2200)
		{
			PPM_Sample_Cnt++;
			PPM_buf[PPM_Sample_Cnt-1]=PPM_Time_Delta;//对应通道写入缓冲区
			if(PPM_Sample_Cnt>=8)//单次解析结束
			{
				memcpy(PPM_Databuf,PPM_buf,PPM_Sample_Cnt*sizeof(uint16));  //从PPM_buf拷贝PPM_Sample_Cnt*sizeof(uint16)个字节到PPM_Databuf
				PPM_Is_Okay=0;
			}
		}
		else
		{
			if(PPM_Time_Delta>=2500) //帧结束电平至少2ms=2000us，由于部分老版本遥控器、
				//接收机输出PPM信号不标准，当出现解析异常时，尝试改小此值
			{
				memcpy(PPM_Databuf,PPM_buf,PPM_Sample_Cnt*sizeof(uint16));	////从PPM_buf拷贝PPM_Sample_Cnt*sizeof(uint16)个字节到PPM_Databuf
				PPM_Is_Okay=1;
				PPM_Sample_Cnt=0;
			}
			else  PPM_Is_Okay=0;
		}
	}
	else if(PPM_Time_Delta>=2500)//帧结束电平至少2ms=2000us
	{
				PPM_Is_Okay=1;
				PPM_Sample_Cnt=0;
	}
}



/* Copyright (c)  2018-2025 Wuhan Nameless Innovation Technology Co.,Ltd. All rights reserved.*/


