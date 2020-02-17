#ifndef __timer_h__
#define __timer_h__

#include "headfile.h"

#ifdef __cplusplus
extern "C" {
#endif

void initTime(void);
void delay(uint32_t ms);
void delayMicroseconds(uint32_t us);
uint32_t millis(void);
uint32_t micros(void);
void Delay_Ms(uint32_t x);
void Delay_Us(uint32_t x);

void delay_ms(uint32_t x);
void delay_us(uint32_t x);
	
#ifdef __cplusplus
}
#endif

#endif
