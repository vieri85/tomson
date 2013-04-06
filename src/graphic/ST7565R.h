//*****************************************************************************
//
//! \file ST7565R.h
//! \brief
//! \version V0.0.1
//! \date 3/3/2013
//! \author Shadow(gzbkey)
//! \copy
//!
//! Copyright (c)  2012-2013, Shadow(gzbkey)
//! All rights reserved.
//
//*****************************************************************************

#ifndef _ST7565R_H_
#define _ST7565R_H_
//*****************************************************************************
//
//! \addtogroup CoX_Driver_Lib
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup LCD
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup LCD_Graphic
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup ST7565R_For_ST
//! @{
//
//*****************************************************************************

#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_flash.h"
#include "stm32f10x_spi.h"
#include "misc.h"

//
//don't change it
//
#define SOFTWARE                0
#define HARDWARE                1

//
// use SPI mode ,set HARDWARE or SOFTWARE
//
#define SPI_MODE                HARDWARE

#define SPI_X                   2

//*****************************************************************************
//
//! ST7565R Device config, here must be configured before use the API.
//
//*****************************************************************************
#define ST7565R_RS       GPIO_Pin_10	//Fira_ A0: low - config data, high-graphic data
#define ST7565R_RST      GPIO_Pin_11
#define ST7565R_SID      GPIO_Pin_15
#define ST7565R_SCLK     GPIO_Pin_13
#define ST7565R_CS       GPIO_Pin_14	//Fira_ chip select will be not use
#define ST7565R_BLK      GPIO_Pin_12
#define ST7565R_PORT     GPIOB



//*****************************************************************************
//
//! ST7565R macro definition, do not change it
//
//*****************************************************************************
#define ST7565R_RS_H     GPIO_SetBits(ST7565R_PORT,ST7565R_RS)
#define ST7565R_RS_L     GPIO_ResetBits(ST7565R_PORT,ST7565R_RS)
#define ST7565R_RST_H    GPIO_SetBits(ST7565R_PORT,ST7565R_RST)
#define ST7565R_RST_L    GPIO_ResetBits(ST7565R_PORT,ST7565R_RST)
#define ST7565R_SID_H    GPIO_SetBits(ST7565R_PORT,ST7565R_SID)
#define ST7565R_SID_L    GPIO_ResetBits(ST7565R_PORT,ST7565R_SID)
#define ST7565R_SCLK_H   GPIO_SetBits(ST7565R_PORT,ST7565R_SCLK)
#define ST7565R_SCLK_L   GPIO_ResetBits(ST7565R_PORT,ST7565R_SCLK)
#define ST7565R_CS_H     GPIO_SetBits(ST7565R_PORT,ST7565R_CS)
#define ST7565R_CS_L     GPIO_ResetBits(ST7565R_PORT,ST7565R_CS)
#define ST7565R_BLK_H    GPIO_SetBits(ST7565R_PORT,ST7565R_BLK)
#define ST7565R_BLK_L    GPIO_ResetBits(ST7565R_PORT,ST7565R_BLK)


//*****************************************************************************
//
//! ST7565R APIs
//
//*****************************************************************************

void ST7565R_Init(void);
void ST7565R_Clear_Screen(void);
void ST7565R_Display_Num(u8 ucRow, u8 ucColumn, u8 ucNum);
void ST7565R_Display_ASCII(u8 ucRow, u8 ucColumn, u8 ucAscii);
void ST7565R_Display_CN(u8 ucRow, u8 ucColumn, u8 *pucData);
void ST7565R_Display_16x32_Num(u8 ucRow, u8 ucColumn, u8 ucNum);
void ST7565R_Display_16x32_Num_Reverse(u8 ucRow, u8 ucColumn, u8 ucNum);
void ST7565R_Display_Picture(u8 *pucData);

extern unsigned char zhong[];
extern unsigned char ST7565R_Picture[];
//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************
#endif /* _ST7565R_H_ */

