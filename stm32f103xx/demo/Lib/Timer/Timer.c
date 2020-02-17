#include "Timer.h"

 static volatile uint32_t counter;

uint32_t usTicks;	

void initTime(void)
{

	     SysTick_Config(SystemCoreClock / 8000);			//1MS
       SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);
			 usTicks=SystemCoreClock / 8000000;
}

void SysTick_Handler(void) {
  counter++;
}

uint32_t millis(void) {
  return counter ;
}

uint32_t micros(void) {
	 register uint32_t ms, tick;     
    do{
        ms   = counter;
        tick = SysTick->VAL; 
    }while(ms != counter);
    
    return (ms+1)*1000 - tick/usTicks; 
		// return counter;
}

void delayMicroseconds(uint32_t us) {
  uint32_t start = micros();
  while ((int32_t)(micros() - start) < us) {
    // Do nothing
  };
}


void delay(uint32_t ms) {
  delayMicroseconds(ms * 1000UL);
}

void Delay_Ms(uint32_t x)
{
  delay(x);
}

void delay_ms(uint32_t x)
{
  Delay_Ms(x);
}


void delay_us(uint32_t x)
{
  delayMicroseconds(x);
}


void Delay_Us(uint32_t x) 
{
  delayMicroseconds(x);
}
