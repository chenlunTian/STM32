//头文件
#include "headfile.h"
#include "stm32f10x_usart.h"

int main(void)
{
    uint32 t0,t1;
    HardWave_Init();	//芯片资源、外设初始化
    while(1)
    {
        t0 = micros();
				delay_ms(1);
        t1 = micros();
        printf("time=%d\n\t", t1-t0);//打印系统时间
    }
}
