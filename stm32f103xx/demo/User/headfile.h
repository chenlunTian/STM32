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
**定義串口環形隊列緩衝區接收字節長度（一般爲需要接收字
**節的2倍，如接受字節長度為16則填32）
******************************************************/
#define USART1_Rx_Length 16*2   //定義串口1環形隊列緩衝區接收字節長度
#define USART2_Rx_Length 16*2   //定義串口2環形隊列緩衝區接收字節長度
#define USART3_Rx_Length 16*2   //定義串口3環形隊列緩衝區接收字節長度
#define USART4_Rx_Length 16*2   //定義串口4環形隊列緩衝區接收字節長度
#define USART5_Rx_Length 16*2   //定義串口5環形隊列緩衝區接收字節長度

/******************************************************
* 外设头文件
******************************************************/
#include "system.h"
#include "Timer.h"
#include "PPM.h"
#include "USART.h"



#endif //__HEADFILE_H__
