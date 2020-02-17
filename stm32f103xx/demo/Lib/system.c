#include "system.h"

/***********************************************************
@函数名：HardWave_Init
@入口参数：None
@出口参数：None
@功能描述：对系统芯片资源常规硬件资源进行一系列初始化，具体见
各初始化后的注释
@作者：CLTian
@日期：2020-02-05
*************************************************************/
void HardWave_Init(void)
{
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// 设置中断优先级分组2
		initTime();//系統滴答初始化
	  PPM_Init();//PPM解析初始化
		USART1_Configuration(115200);	//串口1初始化
	
	
	
	
		delay_ms(200);//初始化延时	
}
