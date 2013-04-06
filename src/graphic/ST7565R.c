//*****************************************************************************
//
//! \file ST7565R.c
//! \brief
//! \version V0.0.2
//! \date 2013.3.4
//! \author Shadow(gzbkey)
//! \copy
//!
//! Copyright (c)  2012-2013, Shadow(gzbkey)
//! All rights reserved.
//
//*****************************************************************************

#include "ST7565R.h"
#include "ST7565R_Font.h"
#include "ST7565R_Picture.h"

enum ST7565R_CMD_DAT
{
    cmd, dat
} ST7565R_CMD, ST7565R_DAT;

//*****************************************************************************
//
//! \brief Initialization GPIO
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_GPIO_Init(void)
{
#if SPI_MODE==SOFTWARE
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Pin = ST7565R_RS | ST7565R_RST | ST7565R_SID
            | ST7565R_SCLK | ST7565R_CS | ST7565R_BLK;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(ST7565R_PORT, &GPIO_InitStructure);

#else //SPI_MODE==HARDWARE
    GPIO_InitTypeDef GPIO_InitStructure;
    SPI_InitTypeDef SPI_InitStructure;

    /* Configure SPI1 pins: SCK, MISO and MOSI -------------------------------*/
    GPIO_InitStructure.GPIO_Pin = ST7565R_SCLK | ST7565R_SID;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_Init(ST7565R_PORT, &GPIO_InitStructure);


    GPIO_InitStructure.GPIO_Pin = ST7565R_CS |ST7565R_BLK|ST7565R_RS | ST7565R_RST;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(ST7565R_PORT, &GPIO_InitStructure);


    /* SPI Configuration ----------------------------------------------------*/
    SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
    SPI_InitStructure.SPI_Mode = SPI_Mode_Master;
    SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;
    SPI_InitStructure.SPI_CPOL = SPI_CPOL_Low;
    SPI_InitStructure.SPI_CPHA = SPI_CPHA_1Edge;
    SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;
    SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_256;
    SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;
    SPI_InitStructure.SPI_CRCPolynomial = 7;

#if SPI_X==1
    SPI_Init(SPI1, &SPI_InitStructure);
    SPI_Cmd(SPI1, ENABLE);
#endif

#if SPI_X==2
    SPI_Init(SPI2, &SPI_InitStructure);
    SPI_Cmd(SPI2, ENABLE);
#endif

#if SPI_X==3
    SPI_Init(SPI3, &SPI_InitStructure);
    SPI_Cmd(SPI3, ENABLE);
#endif

#endif
}

#if SPI_MODE==HARDWARE
//*****************************************************************************
//
//! \brief Write one byte (SPI mode)
//!
//! \param ucByte is data(8bit).
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_SPI_Writebyte(unsigned char ucByte)
{

#if SPI_X==1
    while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE) == RESET)
        ;
    SPI_I2S_SendData(SPI1, ucByte);
    while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_RXNE) == RESET)
        ;
    SPI_I2S_ReceiveData(SPI1);
#endif

#if SPI_X==2
    while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_TXE) == RESET)
        ;
    SPI_I2S_SendData(SPI2, ucByte);
    while (SPI_I2S_GetFlagStatus(SPI2, SPI_I2S_FLAG_RXNE) == RESET)
        ;
    SPI_I2S_ReceiveData(SPI2);
#endif

#if SPI_X==3
    while (SPI_I2S_GetFlagStatus(SPI3, SPI_I2S_FLAG_TXE) == RESET)
        ;
    SPI_I2S_SendData(SPI3, ucByte);
    while (SPI_I2S_GetFlagStatus(SPI3, SPI_I2S_FLAG_RXNE) == RESET)
        ;
    SPI_I2S_ReceiveData(SPI3);
#endif
}

#endif

//*****************************************************************************
//
//! \brief Delay ms
//!
//! \param usTime is delay value.
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Delay(u32 uTime)
{
    u32 i, j;

    for (i = 0; i < uTime; i++)
        for (j = 0; j < 10; j++)
            ;
}

//*****************************************************************************
//
//! \brief Send data or command to ST7565R
//!
//! \param ucDatOrCmd decide send data or command.
//! \param ucSendByte is data(8bit) or command(8bit).
//!
//! ucDatOrCmd can be ST7920_DAT or ST7920_CMD
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Write(u8 ucDatOrCmd, u8 ucData)
{
#if SPI_MODE==SOFTWARE
    u8 i, uTime;

    ST7565R_CS_L;
    if (ucDatOrCmd == ST7565R_DAT) /* DAT */
    {
        ST7565R_RS_H;
    }
    else /* CMD */
    {
        ST7565R_RS_L;
    }

    for (i = 0; i < 8; i++)
    {
        if (ucData & 0x80)
        {
            ST7565R_SID_H;
        }
        else
        {
            ST7565R_SID_L;
        }
        ST7565R_SCLK_H;
        while (uTime--)
            ;
        ST7565R_SCLK_L;
        while (uTime--)
            ;
        ucData <<= 1;
    }
#else  //HARDWARE
    ST7565R_CS_L;
    if (ucDatOrCmd == ST7565R_DAT) /* DAT */
    {
        ST7565R_RS_H;
    }
    else /* CMD */
    {
        ST7565R_RS_L;
    }
    ST7565R_SPI_Writebyte(ucData);
#endif
}

//*****************************************************************************
//
//! \brief Initialization ST7565R
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Init(void)
{


    ST7565R_DAT = dat;
    ST7565R_CMD = cmd;

    ST7565R_RS_L;
    ST7565R_RST_L;
    ST7565R_SID_L;
    ST7565R_SCLK_L;
    ST7565R_CS_L;
    ST7565R_BLK_L; /*������*/

    ST7565R_Delay(500); /*��ʱ�ȴ��ϵ�*/

    ST7565R_GPIO_Init();
    ST7565R_RST_L; /*��λ*/
    ST7565R_Delay(200);
    ST7565R_RST_H;
    //
    //���²���û���Լ������ı�Ҫ
    //
    ST7565R_Write(ST7565R_CMD, 0xe2); /*����λ*/
    ST7565R_Write(ST7565R_CMD, 0x2c); /*��ѹ����1*/
    ST7565R_Delay(5);
    ST7565R_Write(ST7565R_CMD, 0x2e); /*��ѹ����2*/
    ST7565R_Delay(5);
    ST7565R_Write(ST7565R_CMD, 0x2f); /*��ѹ����3*/
    ST7565R_Delay(5);
    ST7565R_Write(ST7565R_CMD, 0x22); /*�ֵ��Աȶȣ������÷�Χ20��27*/
    ST7565R_Write(ST7565R_CMD, 0x81); /*΢���Աȶ�*/
    ST7565R_Write(ST7565R_CMD, 0x19); /*΢���Աȶȵ�ֵ�������÷�Χ0��63*/
    ST7565R_Write(ST7565R_CMD, 0xa2); /*1/9ƫѹ�ȣ�bias��*/
    ST7565R_Write(ST7565R_CMD, 0xc8); /*��ɨ��˳�򣺴��ϵ���*/
    ST7565R_Write(ST7565R_CMD, 0xa0); /*��ɨ��˳�򣺴�����*/
    ST7565R_Write(ST7565R_CMD, 0x40); /*��ʼ�У��ӵ�һ�п�ʼ*/
    ST7565R_Write(ST7565R_CMD, 0xaf); /*����ʾ*/

}

//*****************************************************************************
//
//! \brief Clear the srceen of ST7565R
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Clear_Screen(void)
{
    u8 i, j;

    for (i = 0; i < 4; i++)
    {
        ST7565R_CS_L;
        ST7565R_Write(ST7565R_CMD, 0xb0 + i);
        ST7565R_Write(ST7565R_CMD, 0x10);
        ST7565R_Write(ST7565R_CMD, 0x00);
        for (j = 0; j < 132; j++)
        {
            ST7565R_Write(ST7565R_DAT, 0x00);
        }
    }
}

//*****************************************************************************
//
//! \brief Display a number within HCGROM
//!
//! \param ucRow is row
//! \param ucColumn is column
//! \param ucNum is number (0-9)
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Display_Num(u8 ucRow, u8 ucColumn, u8 ucNum)
{
    u8 i, j, Column_Temp, Column_L, Column_H;

    ucNum = ucNum * 16;
    for (i = 0; i < 2; i++)
    {
        ST7565R_CS_L;
        //
        //set page address,�����е�ַ
        //
        ST7565R_Write(ST7565R_CMD, 0xb0 + i + 2 * ucRow);
        //
        //�����иߵ͵�ַ
        //
        Column_Temp = ucColumn * 0x08;
        Column_H = Column_Temp & 0xf0;
        Column_H = Column_H >> 4;
        Column_L = Column_Temp & 0x0f;
        ST7565R_Write(ST7565R_CMD, 0x10 + Column_H);
        ST7565R_Write(ST7565R_CMD, 0x00 + Column_L);
        for (j = 0; j < 8; j++)
        {
            ST7565R_Write(ST7565R_DAT, HCGROM[ucNum]);
            ucNum++;
        }
    }
}

//*****************************************************************************
//
//! \brief Display a Ascii within HCGROM
//!
//! \param ucRow is row
//! \param ucColumn is column
//! \param ucAscii is Ascii
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Display_ASCII(u8 ucRow, u8 ucColumn, u8 ucAscii)
{
    u8 i, j, Column_Temp, Column_L, Column_H;
    u32 uiHChar;

    //
    //asciiת���ֵ�������ʼλ
    //
    uiHChar = (ucAscii - 23) * 16;

    for (i = 0; i < 2; i++)
    {
        ST7565R_CS_L;
        //
        //set page address,�����е�ַ
        //
        ST7565R_Write(ST7565R_CMD, 0xb0 + i + 2 * ucRow);
        //
        //�����иߵ͵�ַ
        //
        Column_Temp = ucColumn * 0x08;
        Column_H = Column_Temp & 0xf0;
        Column_H = Column_H >> 4;
        Column_L = Column_Temp & 0x0f;
        ST7565R_Write(ST7565R_CMD, 0x10 + Column_H);
        ST7565R_Write(ST7565R_CMD, 0x00 + Column_L);
        for (j = 0; j < 8; j++)
        {
            ST7565R_Write(ST7565R_DAT, HCGROM[uiHChar]);
            uiHChar++;
        }
    }
}

//*****************************************************************************
//
//! \brief Display the Chinese
//!
//! \param ucRow is row
//! \param ucColumn is column
//! \param *pucData is string
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Display_CN(u8 ucRow, u8 ucColumn, u8 *pucData)
{
    u8 i, j, Column_Temp, Column_L, Column_H;

    for (i = 0; i < 2; i++)
    {
        ST7565R_CS_L;
        //
        //set page address,�����е�ַ
        //
        ST7565R_Write(ST7565R_CMD, 0xb0 + i + 2 * ucRow);
        //
        //�����иߵ͵�ַ
        //
        Column_Temp = ucColumn * 0x10;
        Column_H = Column_Temp & 0xf0;
        Column_H = Column_H >> 4;
        Column_L = Column_Temp & 0x0f;
        ST7565R_Write(ST7565R_CMD, 0x10 + Column_H);
        ST7565R_Write(ST7565R_CMD, 0x00 + Column_L);
        for (j = 0; j < 16; j++)
        {
            ST7565R_Write(ST7565R_DAT, *pucData);
            pucData++;
        }
    }
}


//*****************************************************************************
//
//! \brief Display a number (16*32)
//!
//! \param ucRow is row
//! \param ucColumn is column
//! \param ucNum is a number for display
//!
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Display_16x32_Num(u8 ucRow, u8 ucColumn, u8 ucNum)
{
    u8 i, j, Column_Temp, Column_L, Column_H;

    ucNum = ucNum * 60;
    for (i = 0; i < 4; i++)
    {
        ST7565R_CS_L;
        //
        //set page address,�����е�ַ
        //
        ST7565R_Write(ST7565R_CMD, 0xb0 + i + 2 * ucRow);
        //
        //�����иߵ͵�ַ
        //
        Column_Temp = ucColumn * 16;
        Column_H = Column_Temp & 0xf0;
        Column_H = Column_H >> 4;
        Column_L = Column_Temp & 0x0f;
        ST7565R_Write(ST7565R_CMD, 0x10 + Column_H);
        ST7565R_Write(ST7565R_CMD, 0x00 + Column_L);
        for (j = 0; j < 15; j++)
        {
            ST7565R_Write(ST7565R_DAT, Num_16x32[ucNum]);
            ucNum++;
        }
    }
}

//*****************************************************************************
//
//! \brief Reverse display a number (16*32)
//!
//! \param ucRow is row
//! \param ucColumn is column
//! \param ucNum is a number for display
//!
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Display_16x32_Num_Reverse(u8 ucRow, u8 ucColumn, u8 ucNum)
{
    u8 i, j, Column_Temp, Column_L, Column_H;
    u32 uiNum_Temp;

    uiNum_Temp = ucNum * 60;
    for (i = 0; i < 4; i++)
    {
        ST7565R_CS_L;
        //
        //set page address,�����е�ַ
        //
        ST7565R_Write(ST7565R_CMD, 0xb0 + i + 2 * ucRow);
        //
        //�����иߵ͵�ַ
        //
        Column_Temp = ucColumn * 16;
        Column_H = Column_Temp & 0xf0;
        Column_H = Column_H >> 4;
        Column_L = Column_Temp & 0x0f;
        ST7565R_Write(ST7565R_CMD, 0x10 + Column_H);
        ST7565R_Write(ST7565R_CMD, 0x00 + Column_L);
        for (j = 0; j < 15; j++)
        {
            ST7565R_Write(ST7565R_DAT, ~Num_16x32[uiNum_Temp]);
            uiNum_Temp++;
        }
    }
}


//*****************************************************************************
//
//! \brief Display a picture (12832)
//!
//! \param *pucData is array of picture data
//!
//! \return None.
//
//*****************************************************************************
void ST7565R_Display_Picture(u8 *pucData)
{
    u8 i, j;

    for (i = 0; i < 4; i++)
    {
        ST7565R_CS_L;
        //
        //set page address,�����е�ַ
        //
        ST7565R_Write(ST7565R_CMD, 0xb0 + i);
        //
        //�����иߵ͵�ַ
        //
        ST7565R_Write(ST7565R_CMD, 0x10);
        ST7565R_Write(ST7565R_CMD, 0x00);
        for (j = 0; j < 128; j++)
        {
            ST7565R_Write(ST7565R_DAT, *pucData);
            pucData++;
        }
    }
}










