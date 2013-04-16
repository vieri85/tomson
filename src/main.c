/**
*****************************************************************************
**
**  File        : main.c
**
**  Abstract    : main function.
**
**  Functions   : main
**
**  Environment : Atollic TrueSTUDIO(R)
**
**  Distribution: The file is distributed “as is,” without any warranty
**                of any kind.
**
**  (c)Copyright Atollic AB.
**  You may use this file as-is or modify it according to the needs of your
**  project. This file may only be built (assembled or compiled and linked)
**  using the Atollic TrueSTUDIO(R) product. The use of this file together
**  with other tools than Atollic TrueSTUDIO(R) is not permitted.
**
*****************************************************************************
*/

/* Includes */
#include <stddef.h>
#include "stm32f0xx_usart.h"
#include "stm32f0xx_rcc.h"
#include "stm32f0xx_gpio.h"
#include "ST7565R.h"

/* Private typedef */

/* Private define  */
/* STM32F0_DISCOVERY board definitions */
#define LED_PORT GPIOC
#define LED1 GPIO_Pin_9
#define LED2 GPIO_Pin_8
#define DEBUG_PIN_0 GPIO_Pin_0
#define DEBUG_PIN_1 GPIO_Pin_1

#define KEY_PORT GPIOA
#define KEY GPIO_Pin_0
#define DEBUG_PORT GPIOB
/* Private macro */

#define BIT00	(1<<0)
#define BIT01	(1<<1)
#define BIT02	(1<<2)
#define BIT03	(1<<3)
#define BIT04	(1<<4)
#define BIT05	(1<<5)
#define BIT06	(1<<6)
#define BIT07	(1<<7)
#define BIT08	(1<<8)
#define BIT09	(1<<9)
#define BIT10	(1<<10)
#define BIT11	(1<<11)
#define BIT12	(1<<12)
#define BIT13	(1<<13)
#define BIT14	(1<<14)
#define BIT15	(1<<15)

/* Private variables */

/* Private function prototypes */
void init_general_gpio_UART(void);

/* Private functions */

/* Global variables */
uint32_t timer=0;
uint8_t  timerFlag=0;
uint8_t letter=255;


inline void init_gpio(void)
{
	  GPIO_InitTypeDef        GPIO_InitStructure;
	  /* GPIOA-C Periph clock enable */
	  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);
	  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB, ENABLE);
	  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOC, ENABLE);

	  /* Configure
	   * PA0 USER Button input
	   * */
	  GPIO_InitStructure.GPIO_Pin = KEY;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	  GPIO_Init(KEY_PORT, &GPIO_InitStructure);

	  /* Configure PC8 and PC9 in output pushpull mode
	   * PC8 = LD3 Green LED
	   * PC9 = LD4 Blue LED
	   * */
	  GPIO_InitStructure.GPIO_Pin = LED1 | LED2;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	  GPIO_Init(LED_PORT, &GPIO_InitStructure);

	  GPIO_SetBits(LED_PORT, LED1);
	  GPIO_ResetBits(LED_PORT, LED1);
	  LED_PORT->BSRR = LED2;
	  LED_PORT->BRR = LED2;


}

void init_general_gpio_UART(void)
{
	  GPIO_InitTypeDef GPIO_InitStructure;

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	  GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	  GPIO_Init(GPIOA, &GPIO_InitStructure);

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
//	  GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
//	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
//	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	  GPIO_Init(GPIOA, &GPIO_InitStructure);
}

void debug_pin_init(void)
{
	  GPIO_InitTypeDef        GPIO_InitStructure;
	  GPIO_InitStructure.GPIO_Pin = DEBUG_PIN_0 | DEBUG_PIN_1;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	  GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	  GPIO_Init(DEBUG_PORT, &GPIO_InitStructure);
	  GPIO_ResetBits(DEBUG_PORT, DEBUG_PIN_0);
	  GPIO_ResetBits(DEBUG_PORT, DEBUG_PIN_1);
}

/**
**===========================================================================
**
**  Abstract: SysTick interrupt handler
**
**===========================================================================
*/
void SysTick_Handler(void)
{
  timer++;
  if  (timer>2000)
  {
    timerFlag = 1;
    timer = 0;
  }
}


/**
**===========================================================================
**
**  Abstract: main program
**
**===========================================================================
*/
int main(void)
{


  uint32_t ii = 0;

  static RCC_ClocksTypeDef RCC_Clocks;
  USART_InitTypeDef USART_2_InitStruct;
  NVIC_InitTypeDef NVIC_InitStructure;
  USART_2_InitStruct.USART_BaudRate = 19200;
  USART_2_InitStruct.USART_HardwareFlowControl = USART_HardwareFlowControl_None ;
  USART_2_InitStruct.USART_WordLength = USART_WordLength_8b;
  USART_2_InitStruct.USART_StopBits = USART_StopBits_1;
  USART_2_InitStruct.USART_Parity = USART_Parity_No ;
  USART_2_InitStruct.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;


  /* TODO - Add your application code here */
  SysTick_Config(600);  /* 0.1 ms = 100us if clock frequency 12 MHz */

  SystemCoreClockUpdate();
  ii = SystemCoreClock;    /* This is a way to read the System core clock */
  ii = 0;


  init_gpio();
  debug_pin_init();
  ST7565R_Init();

  RCC_GetClocksFreq(&RCC_Clocks);

  //init for UART
  /*****/
  init_general_gpio_UART();
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2,ENABLE);
  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA,ENABLE);
  GPIO_PinAFConfig(GPIOA, 2, GPIO_AF_1);
  GPIO_PinAFConfig(GPIOA, 3, GPIO_AF_1);
  USART_Init(USART2, &USART_2_InitStruct);
  USART_ITConfig(USART2, USART_IT_RXNE, ENABLE);

 // NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
  NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
  NVIC_InitStructure.NVIC_IRQChannelPriority = 0;
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);
  USART_Cmd(USART2, ENABLE);
  /****/
  while (1)
  {

	  USART_SendData(USART2, letter);
	  if (timerFlag)
	  {
		  //ST7565R_Clear_Screen();
		 // ST7565R_Display_16x32_Num(10, 10, 5);
		  timerFlag = 0;
		  ii++;
//		  letter ++;
//		  if ((letter>220)||(letter<35))
//		  letter=35;
		  ST7565R_Display_16x32_Num(3, 2, letter);

		  /* Toggle LED1 */
		  if (ii == 1)
		  {

			  LED_PORT->BSRR = LED1;

		  }
		  else if (ii == 2)
		  {
			  ii = 0;
			  LED_PORT->BRR = LED1;
		  }
	  }
      if(GPIO_ReadInputDataBit(KEY_PORT, KEY))
	  {
		  /* USER key pressed */
		  if (ii == 1)
		  {
			  GPIO_SetBits(LED_PORT, LED2);
		  }
	  }
	  else
	  {
		  GPIO_ResetBits(LED_PORT, LED2);
	  }
  }
  return 0;
}


void USART2_IRQHandler(void)
{
   if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)
   {
       letter = USART_ReceiveData(USART2);
   }

   // if(USART_GetITStatus(USART1, USART_IT_TXE) != RESET)
   // {
   //    USART_SendData(USART1, T_Buff[T_Index++]);
   //    if(T_Buff[T_Index-1] == 0x0d || T_Index == BUFF_SIZE)
   //    {
   //       USART_ITConfig(USART1, USART_IT_TXE, DISABLE);
   //       T_Index = 0;
   //    }
   // }
}
