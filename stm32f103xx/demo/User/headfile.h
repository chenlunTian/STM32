#ifndef __HEADFILE_H__
#define __HEADFILE_H__

#include <stdint.h>
#include "String.h"
#include <stdio.h>
#include "stm32f10x.h"

typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;

/******************************************************
**���x���ڭh����о��n�^�����ֹ��L�ȣ�һ�㠑��Ҫ������
**����2����������ֹ��L�Ȟ�16�t��32��
******************************************************/
#define USART1_Rx_Length 16*2   //���x����1�h����о��n�^�����ֹ��L��
#define USART2_Rx_Length 16*2   //���x����2�h����о��n�^�����ֹ��L��
#define USART3_Rx_Length 16*2   //���x����3�h����о��n�^�����ֹ��L��
#define USART4_Rx_Length 16*2   //���x����4�h����о��n�^�����ֹ��L��
#define USART5_Rx_Length 16*2   //���x����5�h����о��n�^�����ֹ��L��

/******************************************************
* ����ͷ�ļ�
******************************************************/
#include "system.h"
#include "Timer.h"
#include "PPM.h"
#include "USART.h"



#endif //__HEADFILE_H__
