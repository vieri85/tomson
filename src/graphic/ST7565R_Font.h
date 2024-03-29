/*******************************************************************************
 * @file     :ST7565R_Font.h
 * @brief    :ST7565R通用驱动字库头文件,字模提取v2.2,纵向取模,字节倒序
 * @mcu      :STM32F103RBT6
 * @version  :V0.2
 * @author   :gzbkey
 * @date     :2013.1.2
*******************************************************************************/

#ifndef _ST7565R_FONT_H_
#define _ST7565R_FONT_H_
unsigned char zhong[]=
{
        /*--  文字:  中  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x00,0x00,0xFC,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0xFC,0x08,0x00,0x00,
        0x00,0x00,0x07,0x02,0x02,0x02,0x02,0xFF,0x02,0x02,0x02,0x02,0x07,0x00,0x00,0x00,
};
unsigned char wen[]=
        {
        /*--  文字:  文  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x08,0x08,0x08,0x08,0x78,0x88,0x09,0x0E,0x08,0x88,0x78,0x08,0x08,0x08,0x08,0x00,
        0x40,0x40,0x40,0x20,0x20,0x11,0x0A,0x04,0x0A,0x11,0x10,0x20,0x60,0x20,0x20,0x00,
        };
unsigned char zi[]=
                {
        /*--  文字:  字  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=16x16   --*/
        0x00,0x10,0x0C,0x24,0x24,0x24,0x25,0x26,0xA4,0x64,0x24,0x04,0x14,0x0C,0x00,0x00,
        0x00,0x02,0x02,0x02,0x02,0x42,0x82,0x7F,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00
};



unsigned char HCGROM[] =
{
        /*--  文字:  0  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,

        /*--  文字:  1  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        /*--  文字:  2  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,

        /*--  文字:  3  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00,0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  4  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00,0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00,

        /*--  文字:  5  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  6  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  7  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,

        /*--  文字:  8  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,

        /*--  文字:  9  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00,

        /*--  文字:  !  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x30,0x00,0x00,0x00,

        /*--  文字:  "  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x10,0x0C,0x06,0x10,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

        /*--  文字:  #  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x40,0xC0,0x78,0x40,0xC0,0x78,0x40,0x00,0x04,0x3F,0x04,0x04,0x3F,0x04,0x04,0x00,

        /*--  文字:  $  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x70,0x88,0xFC,0x08,0x30,0x00,0x00,0x00,0x18,0x20,0xFF,0x21,0x1E,0x00,0x00,

        /*--  文字:  %  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0xF0,0x08,0xF0,0x00,0xE0,0x18,0x00,0x00,0x00,0x21,0x1C,0x03,0x1E,0x21,0x1E,0x00,

        /*--  文字:  &  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00,0x1E,0x21,0x23,0x24,0x19,0x27,0x21,0x10,

        /*--  文字:  '  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x10,0x16,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

        /*--  文字:  (  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00,0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00,

        /*--  文字:  )  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00,

        /*--  文字:  *  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00,

        /*--  文字:  +  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x1F,0x01,0x01,0x01,0x00,

        /*--  文字:  ,  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xB0,0x70,0x00,0x00,0x00,0x00,0x00,

        /*--  文字:  -  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,

        /*--  文字:  .  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,

        /*--  文字:  /  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x04,0x00,0x60,0x18,0x06,0x01,0x00,0x00,0x00,

        /*--  文字:  0  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,

        /*--  文字:  1  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        /*--  文字:  2  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,

        /*--  文字:  3  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00,0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  4  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00,0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00,

        /*--  文字:  5  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  6  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  7  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,

        /*--  文字:  8  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,

        /*--  文字:  9  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00,

        /*--  文字:  :  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,

        /*--  文字:  ;  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00,0x00,

        /*--  文字:  <  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00,

        /*--  文字:  =  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,

        /*--  文字:  >  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00,

        /*--  文字:  ?  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x70,0x48,0x08,0x08,0x08,0xF0,0x00,0x00,0x00,0x00,0x30,0x36,0x01,0x00,0x00,

        /*--  文字:  @  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00,0x07,0x18,0x27,0x24,0x23,0x14,0x0B,0x00,

        /*--  文字:  A  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20,

        /*--  文字:  B  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  C  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00,

        /*--  文字:  D  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00,0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00,

        /*--  文字:  E  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00,

        /*--  文字:  F  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00,

        /*--  文字:  G  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00,0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00,

        /*--  文字:  H  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20,

        /*--  文字:  I  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        /*--  文字:  J  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00,

        /*--  文字:  K  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00,0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00,

        /*--  文字:  L  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00,

        /*--  文字:  M  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00,0x20,0x3F,0x00,0x3F,0x00,0x3F,0x20,0x00,

        /*--  文字:  N  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08,0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00,

        /*--  文字:  O  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00,

        /*--  文字:  P  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00,0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00,

        /*--  文字:  Q  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x18,0x24,0x24,0x38,0x50,0x4F,0x00,

        /*--  文字:  R  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00,0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20,

        /*--  文字:  S  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00,0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00,

        /*--  文字:  T  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,

        /*--  文字:  U  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,

        /*--  文字:  V  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08,0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00,

        /*--  文字:  W  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0xF8,0x08,0x00,0xF8,0x00,0x08,0xF8,0x00,0x03,0x3C,0x07,0x00,0x07,0x3C,0x03,0x00,

        /*--  文字:  X  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08,0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20,

        /*--  文字:  Y  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,

        /*--  文字:  Z  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00,0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00,

        /*--  文字:  [  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x00,

        /*--  文字:  \  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x0C,0x30,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x38,0xC0,0x00,

        /*--  文字:  ]  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,

        /*--  文字:  ^  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x04,0x02,0x02,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

        /*--  文字:  _  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,

        /*--  文字:  `  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x02,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

        /*--  文字:  a  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x19,0x24,0x22,0x22,0x22,0x3F,0x20,

        /*--  文字:  b  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  c  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00,

        /*--  文字:  d  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x80,0x80,0x88,0xF8,0x00,0x00,0x0E,0x11,0x20,0x20,0x10,0x3F,0x20,

        /*--  文字:  e  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x22,0x13,0x00,

        /*--  文字:  f  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x18,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        /*--  文字:  g  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00,

        /*--  文字:  h  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,

        /*--  文字:  i  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        /*--  文字:  j  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,

        /*--  文字:  k  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x08,0xF8,0x00,0x00,0x80,0x80,0x80,0x00,0x20,0x3F,0x24,0x02,0x2D,0x30,0x20,0x00,

        /*--  文字:  l  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x08,0x08,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        /*--  文字:  m  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F,

        /*--  文字:  n  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,

        /*--  文字:  o  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,

        /*--  文字:  p  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,0x80,0xFF,0xA1,0x20,0x20,0x11,0x0E,0x00,

        /*--  文字:  q  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x0E,0x11,0x20,0x20,0xA0,0xFF,0x80,

        /*--  文字:  r  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00,

        /*--  文字:  s  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00,

        /*--  文字:  t  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x20,0x00,0x00,

        /*--  文字:  u  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20,

        /*--  文字:  v  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x01,0x0E,0x30,0x08,0x06,0x01,0x00,

        /*--  文字:  w  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00,

        /*--  文字:  x  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x31,0x2E,0x0E,0x31,0x20,0x00,

        /*--  文字:  y  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x81,0x8E,0x70,0x18,0x06,0x01,0x00,

        /*--  文字:  z  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00,

        /*--  文字:  {  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x00,0x80,0x7C,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x40,

        /*--  文字:  |  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,

        /*--  文字:  }  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x02,0x02,0x7C,0x80,0x00,0x00,0x00,0x00,0x40,0x40,0x3F,0x00,0x00,0x00,0x00,

        /*--  文字:  ~  --*/
        /*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
        0x00,0x06,0x01,0x01,0x02,0x02,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00


/*        --  文字:  0  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,

        --  文字:  1  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        --  文字:  2  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,

        --  文字:  3  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00,0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00,

        --  文字:  4  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00,0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00,

        --  文字:  5  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00,

        --  文字:  6  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00,

        --  文字:  7  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,

        --  文字:  8  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,

        --  文字:  9  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00,

        --  文字:  a  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x19,0x24,0x22,0x22,0x22,0x3F,0x20,

        --  文字:  b  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00,

        --  文字:  c  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00,

        --  文字:  d  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x00,0x80,0x80,0x88,0xF8,0x00,0x00,0x0E,0x11,0x20,0x20,0x10,0x3F,0x20,

        --  文字:  e  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x22,0x13,0x00,

        --  文字:  f  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x18,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        --  文字:  g  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00,

        --  文字:  h  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,

        --  文字:  i  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        --  文字:  j  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,

        --  文字:  k  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x00,0x00,0x80,0x80,0x80,0x00,0x20,0x3F,0x24,0x02,0x2D,0x30,0x20,0x00,

        --  文字:  l  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x08,0x08,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        --  文字:  m  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F,

        --  文字:  n  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,

        --  文字:  o  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,

        --  文字:  p  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,0x80,0xFF,0xA1,0x20,0x20,0x11,0x0E,0x00,

        --  文字:  q  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x0E,0x11,0x20,0x20,0xA0,0xFF,0x80,

        --  文字:  r  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00,

        --  文字:  s  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00,

        --  文字:  t  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x20,0x00,0x00,

        --  文字:  u  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20,

        --  文字:  v  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x01,0x0E,0x30,0x08,0x06,0x01,0x00,

        --  文字:  w  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00,

        --  文字:  x  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x31,0x2E,0x0E,0x31,0x20,0x00,

        --  文字:  y  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x81,0x8E,0x70,0x18,0x06,0x01,0x00,

        --  文字:  z  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00,

        --  文字:  A  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20,

        --  文字:  B  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00,

        --  文字:  C  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00,

        --  文字:  D  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00,0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00,

        --  文字:  E  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00,

        --  文字:  F  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00,

        --  文字:  G  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00,0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00,

        --  文字:  H  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20,

        --  文字:  I  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

        --  文字:  J  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00,

        --  文字:  K  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00,0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00,

        --  文字:  L  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00,

        --  文字:  M  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00,0x20,0x3F,0x00,0x3F,0x00,0x3F,0x20,0x00,

        --  文字:  N  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08,0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00,

        --  文字:  O  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00,

        --  文字:  P  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00,0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00,

        --  文字:  Q  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x18,0x24,0x24,0x38,0x50,0x4F,0x00,

        --  文字:  R  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00,0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20,

        --  文字:  S  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00,0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00,

        --  文字:  T  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,

        --  文字:  U  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,

        --  文字:  V  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08,0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00,

        --  文字:  W  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0xF8,0x08,0x00,0xF8,0x00,0x08,0xF8,0x00,0x03,0x3C,0x07,0x00,0x07,0x3C,0x03,0x00,

        --  文字:  X  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08,0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20,

        --  文字:  Y  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,

        --  文字:  Z  --
        --  宋体12;  此字体下对应的点阵为：宽x高=8x16   --
        0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00,0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00*/
};





unsigned char Num_16x32[] =
{

/*--  文字:  0  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0x40,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,
0xFC,0xFF,0xFF,0x0F,0x01,0x00,0x00,0x00,0x01,0x0F,0xFF,0xFF,0xFC,0x00,0x00,0x1F,
0x7F,0xFF,0xF8,0xC0,0x80,0x00,0x80,0xC0,0xFC,0xFF,0x3F,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  1  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

/*--  文字:  2  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0x00,0x80,0xC0,0xC0,0x40,0x40,0x40,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,
0x0E,0x1F,0x1F,0x1F,0x00,0x00,0x00,0x80,0xE0,0xFF,0x7F,0x3F,0x0E,0x00,0x00,0xC0,
0xE0,0xF0,0xB8,0x9C,0x8E,0x87,0x83,0x81,0xC0,0xE0,0xF0,0x70,0x00,0x00,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,

/*--  文字:  3  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0x80,0x80,0xC0,0x40,0x40,0x40,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,
0x02,0x07,0x07,0x07,0x40,0x40,0x40,0xE0,0xFF,0xBF,0x9F,0x0F,0x00,0x00,0x00,0x70,
0xF0,0xF0,0xF0,0x00,0x00,0x00,0x80,0x81,0xFF,0xFF,0x7F,0x1C,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  4  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0xE0,0x78,0x3C,0x0F,0x07,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x04,0x07,
0x07,0x05,0x04,0x04,0x04,0x84,0xFF,0xFF,0xFF,0x84,0x04,0x04,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

/*--  文字:  5  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xCF,0x60,0x20,0x20,0x20,0x60,0xE0,0xC0,0x80,0x00,0x00,0x00,0x38,
0xF8,0xF9,0xF8,0x00,0x00,0x00,0x80,0xC0,0xFF,0xFF,0x7F,0x1F,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

/*--  文字:  6  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0x00,0x00,0x80,0xC0,0xC0,0x40,0x40,0xC0,0xC0,0xC0,0x80,0x00,0x00,0x00,
0xF8,0xFE,0xFF,0xCF,0x61,0x60,0x20,0x20,0x63,0xE3,0xC3,0xC3,0x00,0x00,0x00,0x1F,
0x7F,0xFF,0xF1,0xC0,0x80,0x00,0x00,0x80,0xF3,0xFF,0x7F,0x3F,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

/*--  文字:  7  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x40,0x00,0x00,
0x07,0x07,0x03,0x01,0x00,0x80,0xE0,0xF0,0x7C,0x0F,0x03,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xFC,0xFF,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  8  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0x80,0x80,0xC0,0xC0,0x40,0x40,0x40,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,
0x0E,0x3F,0xBF,0xF1,0xE0,0xE0,0xC0,0xC0,0xE0,0xF3,0x3F,0x1F,0x0E,0x00,0x00,0x7E,
0xFF,0xFF,0x81,0x80,0x00,0x00,0x01,0x83,0xC7,0xFF,0x7E,0x3C,0x00,0x00,0x00,0x00,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,

/*--  文字:  9  --*/
/*--  宋体22;  此字体下对应的点阵为：宽x高=15x29   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=15x32  --*/
0x00,0x00,0x80,0x80,0xC0,0xC0,0x40,0x40,0x40,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,
0xFE,0xFF,0xFF,0x83,0x00,0x00,0x00,0x00,0x80,0xEF,0xFF,0xFF,0xFC,0x00,0x00,0x00,
0xE1,0xE3,0xE3,0x83,0x02,0x82,0x83,0xE3,0xFF,0x7F,0x1F,0x07,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00

};









#endif /* _ST7565R_FONT_H_ */
