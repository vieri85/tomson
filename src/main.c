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

/* Private variables */

/* Private function prototypes */

/* Private functions */

/* Global variables */
uint32_t timer=0;
uint8_t  timerFlag=0;

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

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	  GPIO_Init(GPIOA, &GPIO_InitStructure);

	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	  GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
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
  uint8_t letter=35;
  static RCC_ClocksTypeDef RCC_Clocks;
  USART_InitTypeDef USART_2_InitStruct;
  USART_2_InitStruct.USART_BaudRate = 4800;
  USART_2_InitStruct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
  USART_2_InitStruct.USART_WordLength = USART_WordLength_8b;
  USART_2_InitStruct.USART_StopBits = USART_StopBits_1;
  USART_2_InitStruct.USART_Parity = USART_Parity_No ;
  USART_2_InitStruct.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;



  /* TODO - Add your application code here */
  SysTick_Config(800);  /* 0.1 ms = 100us if clock frequency 12 MHz */

  SystemCoreClockUpdate();
  ii = SystemCoreClock;    /* This is a way to read the System core clock */
  ii = 0;


  init_gpio();
  debug_pin_init();
  ST7565R_Init();

  RCC_GetClocksFreq(&RCC_Clocks);

  //init for UART
  /*****/
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2,ENABLE);
  RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA,ENABLE);
  GPIO_PinAFConfig(GPIOA, 2, GPIO_AF_1);
  GPIO_PinAFConfig(GPIOA, 3, GPIO_AF_1);
  USART_Init(USART2, &USART_2_InitStruct);
  USART_Cmd(USART2, ENABLE);
  /****/
  while (1)
  {
	  if (timerFlag)
	  {
		  ST7565R_Display_16x32_Num(10, 10, 5);
		  timerFlag = 0;
		  ii++;
		  letter++;
		  if (letter>70)
		  letter=35;
		  ST7565R_Display_ASCII(3, 2, letter);
		  USART_SendData(USART2, 36);
		  /* Toggle LED1 */
		  if (ii == 1)
		  {

			  LED_PORT->BSRR = LED1;
			  USART_SendData(USART2, 17);

		  }
		  else if (ii == 2)
		  {
			  ii = 0;
			  LED_PORT->BRR = LED1;
			  USART_SendData(USART2, 40);
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


