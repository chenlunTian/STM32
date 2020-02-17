/**
  ************************************* Copyright ******************************
  *
  *                 (C) Copyright {2020},CLTian,China, SZ.
  *                            All Rights Reserved
  *
  *
  * FileName   : USART.H
  * Version    : v1.0
  * Author     : CLTian
  * Date       : 2020-02-05
  * Description:	
  * Function List:
  ******************************************************************************
 */


#ifndef __USART_H_
#define __USART_H_

#include "headfile.h"

/*****************************************************************
**void USART1_Send(uint8_t *pui8Buffer, uint32_t ui32Count);
**void USART1_IRQHandler(void);
**void USART1_Configuration(uint32 BaudRate);
**此套程序僅配置了USART1如有需要可參考此三項函數配置相應的串口即可
****************************************************************/

void USART1_Configuration(uint32 BaudRate);
void UART_PutChar(USART_TypeDef* USARTx, uint8_t Data);
void UART_PutStr (USART_TypeDef* USARTx, uint8_t *str);
void USART1_Send(uint8_t *pui8Buffer, uint32_t ui32Count);
void sendware(unsigned char *wareaddr, int16_t waresize);  //山外发送波形
void Vcan_Send(void); //山外地面站发送

#endif



