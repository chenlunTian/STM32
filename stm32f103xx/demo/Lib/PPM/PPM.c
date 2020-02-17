#include "PPM.h"


void PPMIntHandler(void);

void PPM_Init(void)
{

		//����I/OΪ����
		//����I/OΪ�½��ش���

}

uint16_t PPM_Time_Delta=0,PPM_Is_Okay=0;
uint16 PPM_Databuf[8]={0};
uint8_t PPM_Safety_Flag=0;
static uint16_t PPM_Sample_Cnt=0;
static uint16_t PPM_buf[8]={0};
static uint32_t Last_PPM_Time=0,PPM_Time=0;


void PPMIntHandler(void)
{
	Last_PPM_Time=PPM_Time;//ϵͳ����ʱ���ȡ����λus
	PPM_Time=micros();//��λus
	PPM_Time_Delta=PPM_Time-Last_PPM_Time;//��ȡʱ����
	if(PPM_Is_Okay==1)//PPM������ʼ
	{
		if(PPM_Time_Delta>=800&&PPM_Time_Delta<=2200)
		{
			PPM_Sample_Cnt++;
			PPM_buf[PPM_Sample_Cnt-1]=PPM_Time_Delta;//��Ӧͨ��д�뻺����
			if(PPM_Sample_Cnt>=8)//���ν�������
			{
				memcpy(PPM_Databuf,PPM_buf,PPM_Sample_Cnt*sizeof(uint16));  //��PPM_buf����PPM_Sample_Cnt*sizeof(uint16)���ֽڵ�PPM_Databuf
				PPM_Is_Okay=0;
			}
		}
		else
		{
			if(PPM_Time_Delta>=2500) //֡������ƽ����2ms=2000us�����ڲ����ϰ汾ң������
				//���ջ����PPM�źŲ���׼�������ֽ����쳣ʱ�����Ը�С��ֵ
			{
				memcpy(PPM_Databuf,PPM_buf,PPM_Sample_Cnt*sizeof(uint16));	////��PPM_buf����PPM_Sample_Cnt*sizeof(uint16)���ֽڵ�PPM_Databuf
				PPM_Is_Okay=1;
				PPM_Sample_Cnt=0;
			}
			else  PPM_Is_Okay=0;
		}
	}
	else if(PPM_Time_Delta>=2500)//֡������ƽ����2ms=2000us
	{
				PPM_Is_Okay=1;
				PPM_Sample_Cnt=0;
	}
}



/* Copyright (c)  2018-2025 Wuhan Nameless Innovation Technology Co.,Ltd. All rights reserved.*/


