//ͷ�ļ�
#include "headfile.h"
#include "stm32f10x_usart.h"

int main(void)
{
    uint32 t0,t1;
    HardWave_Init();	//оƬ��Դ�������ʼ��
    while(1)
    {
        t0 = micros();
				delay_ms(1);
        t1 = micros();
        printf("time=%d\n\t", t1-t0);//��ӡϵͳʱ��
    }
}
