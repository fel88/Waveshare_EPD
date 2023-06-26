/**
 *  @filename   :   imagedata.cpp
 *  @brief      :   data file for epd demo
 *
 *  Copyright (C) Waveshare     September 5 2017
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documnetation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to  whom the Software is
 * furished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "ImageData.h"
#include <avr/pgmspace.h>

const unsigned char IMAGE_DATA[] PROGMEM = { /* 0X00,0X01,0X68,0X00,0XD4,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X03,0XF3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0XE3,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X63,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0XF8,0X23,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XC7,0XF8,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X8B,0XF9,0X83,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X99,0XF9,0X83,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X99,0XFD,0X83,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1B,0XFF,0XC3,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XC3,0XFF,0XF1,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0X80,0X3F,0XFF,0XC3,0XFF,0XF1,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XE0,0X3F,0XFF,0XFF,
0X83,0XFF,0XF1,0X1E,0X7F,0XFF,0XFF,0XFF,0XFF,0XC0,0XFF,0XFF,0XFF,0X83,0XFF,0XF1,
0X1E,0X7F,0XFF,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0X03,0XFF,0XF1,0X1E,0X7F,0XFF,
0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0X03,0XFF,0XF1,0X1E,0X7F,0XFF,0XFB,0XFF,0XFF,
0X3F,0XFF,0XFF,0XFF,0X03,0XFF,0XF1,0X1E,0X7F,0XFF,0XFB,0XFF,0XFE,0X3F,0XFF,0XFF,
0XFE,0X03,0XFF,0XF1,0X1E,0X7F,0XFF,0XF3,0XFF,0XF8,0X7F,0XFF,0XFF,0XFE,0X03,0XFF,
0XF1,0X1E,0X7F,0XFF,0XE1,0XFF,0XF0,0XFF,0XFF,0XFF,0XFC,0X23,0XFF,0XF1,0X1E,0X7F,
0XFF,0XE1,0XFF,0XC3,0XFF,0XFF,0XFF,0XC0,0XE3,0XFF,0XF1,0X1E,0X7F,0XFF,0XC4,0XFF,
0X87,0XFF,0XFF,0XFF,0X01,0XE3,0XFF,0XF0,0X1E,0X7F,0XFF,0XC4,0XFF,0X8F,0XFF,0XFF,
0XFE,0X01,0XE1,0XFF,0XF0,0X00,0X7F,0XFF,0XCC,0XFF,0X8F,0XFF,0XFF,0XF8,0X07,0XE1,
0XFF,0XF0,0X00,0X7F,0XFF,0XCC,0XFF,0X83,0XFF,0XFF,0XF8,0X3F,0XF1,0XFF,0XF0,0X00,
0X7F,0XFF,0X8C,0XFF,0XC0,0X00,0X3F,0XF8,0X00,0X31,0XFF,0XFF,0XFF,0XFF,0XFF,0X9C,
0XFF,0XE0,0X00,0X3F,0XFE,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0X9C,0XFF,0XE0,0X00,
0X3F,0XFF,0X00,0X00,0XFF,0XF8,0X0F,0X7F,0XFF,0X9C,0XFF,0X00,0X7F,0XFF,0XFF,0XFF,
0X08,0X7F,0XF8,0X0F,0X7F,0XFF,0X9C,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0X80,0X7F,0XF8,
0X06,0X7F,0XFF,0X9C,0XFE,0X07,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XF1,0XC4,0X7F,0XFF,
0X9C,0XFC,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XF1,0XC0,0X7F,0XFF,0X9C,0XF8,0X7F,
0XFF,0XFF,0XFF,0XFF,0XE0,0X7F,0XF1,0XC0,0XFF,0XFF,0X9C,0XF0,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE0,0X7F,0XF1,0XC0,0XFF,0XFF,0X9C,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,
0XF1,0XC1,0XFF,0XFF,0X9C,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF1,0XC3,0XFF,
0XFF,0X98,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF1,0XC3,0XFF,0XFF,0X98,0X0F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF1,0XC3,0XFF,0XFF,0X98,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X7F,0XF1,0XC7,0XFF,0XFF,0X80,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
0X7F,0XF1,0XC7,0XFF,0XFF,0X80,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XF1,0X87,
0XFF,0XFF,0X80,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XF0,0X00,0X7F,0XFF,0X80,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X07,0XFF,0XF0,0X00,0X7F,0XFF,0XC0,0XFF,0XFF,0XFF,
0XFF,0XC0,0XFE,0X0F,0XFF,0XF0,0X00,0XFF,0XFF,0XC0,0XFF,0XFF,0XFF,0XFF,0X07,0XFE,
0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XC1,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0X0F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE1,0XFF,0XFF,0XFF,0XF0,0X7F,0XFF,0X87,0XFF,0XF8,0X00,0X7F,0XFF,
0XE1,0XFF,0XFF,0XFF,0XE0,0XFF,0XFF,0XC3,0XFF,0XF8,0X00,0X7F,0XFF,0XE1,0XFF,0XFF,
0XFF,0XE1,0XFF,0XFF,0XE1,0XFF,0XF8,0X00,0X7F,0XFF,0XF1,0XFF,0XFF,0XFF,0XE7,0XFF,
0XFF,0XF8,0XFF,0XF0,0XE7,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,0XE7,0XFF,0XFF,0XF8,0X7F,
0XF1,0XE7,0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XF8,0X7F,0XF1,0XE7,0XFF,
0XFF,0XF8,0XFF,0XFF,0XFE,0X1F,0XFF,0XFF,0XFC,0X7F,0XF1,0XE7,0XFF,0XFF,0XF8,0XFF,
0XFF,0XF0,0X1F,0XFF,0XFF,0XFC,0X7F,0XF1,0XE7,0XFF,0XFF,0XFC,0X7F,0XFF,0XC0,0X0F,
0XFF,0XFF,0XFC,0X7F,0XF1,0XE7,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XC0,0XFF,0XFF,0XFC,
0X7F,0XF1,0XE7,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XC0,0XFF,0XFF,0XFC,0X7F,0XF1,0XE7,
0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XC1,0XFF,0XFF,0XF8,0X7F,0XF0,0XE7,0XFF,0XFF,0XFE,
0X1F,0XFF,0XFF,0XC3,0XFB,0XFF,0XF8,0X7F,0XF8,0X00,0X7F,0XFF,0XFE,0X1F,0XFF,0XFF,
0XC3,0XFB,0XFF,0XF8,0X7F,0XF8,0X00,0X7F,0XFF,0XFF,0X0F,0XFF,0XFF,0XE3,0XE3,0X9F,
0XF8,0X7F,0XFC,0X00,0X7F,0XFF,0XFF,0X0F,0XFF,0XFF,0XE1,0XC0,0X0F,0XF8,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0X80,0X07,0XFF,0XE0,0X80,0X0F,0XF8,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0X80,0X00,0X7F,0XE0,0X00,0X0F,0XF8,0X7F,0XF0,0X00,0X7F,0XFF,0XFF,0XC0,0X00,
0X3F,0XF0,0X00,0X1F,0XF8,0X7F,0XF0,0X00,0X7F,0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0X83,
0X3F,0XF8,0X7F,0XF0,0X00,0X7F,0XFF,0XFF,0XFC,0X00,0X07,0XFF,0XE7,0X1F,0XF8,0X7F,
0XFF,0X1F,0XFF,0XFF,0XFF,0XFE,0X00,0X01,0XFF,0XFF,0X0F,0XF8,0X7F,0XFF,0X1F,0XFF,
0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0X0F,0XF0,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,
0X00,0X00,0X7F,0XFF,0X0F,0XF1,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X1F,
0XFF,0X0F,0XF1,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X1F,0XFF,0X0F,0XF1,
0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X1F,0XFF,0X0F,0XF1,0XFF,0XFF,0X1F,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0XFF,0X0F,0XF9,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X0F,0XFF,0X0F,0XF8,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0X0F,0XFF,0X0F,0XF8,0X7F,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X67,0XFF,0X0F,
0XF8,0X7F,0XF0,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFE,0X0F,0XF8,0X7F,0XF0,
0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE1,0XFE,0X0F,0XF8,0XFF,0XF0,0X00,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X7E,0X0F,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF8,0X7E,0X0F,0XF1,0XFF,0XFF,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X7E,
0X0F,0XF1,0XFF,0XF3,0X80,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X3E,0X0F,0XF1,0XFF,
0XF1,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0X1F,0XF0,0XFF,0XF1,0X1C,0X7F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XF8,0XFF,0XF1,0X1C,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X1F,0XFF,0XF8,0X7F,0XF1,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X9F,0XFF,0XF8,0X7F,0XF1,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XF8,
0X7F,0XF1,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XF8,0X7F,0XF1,0X1C,
0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XF0,0XFF,0XF1,0X1C,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XF1,0XFF,0XF1,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFE,
0X00,0X00,0X3F,0XF1,0XFF,0XF1,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X07,
0XF1,0XFF,0XF0,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X03,0XF0,0XFF,0XF8,
0X1C,0X7F,0XFF,0XFF,0XFF,0XF0,0X03,0XFF,0XFC,0X00,0X00,0XFF,0XF8,0X1C,0X7F,0XFF,
0XFF,0XFF,0XC0,0X1F,0X80,0X03,0X80,0X00,0X7F,0XF8,0X3C,0X7F,0XFF,0XFF,0XFF,0X00,
0X30,0X00,0X00,0X18,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X07,0XC0,0X00,0X00,
0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0X00,0X00,0X00,0X01,0X00,0X7F,
0XF1,0XFE,0X7F,0XFF,0XFF,0XF0,0X7E,0X00,0X00,0X00,0X01,0X80,0XFF,0XF1,0XFE,0X7F,
0XFF,0XFF,0XE0,0XFF,0X00,0X00,0X00,0X01,0XC1,0XFF,0XF1,0X1E,0X7F,0XFF,0XFF,0X81,
0XFF,0X00,0X00,0X00,0X00,0X41,0XFF,0XF1,0X1E,0X7F,0XFF,0XFF,0X03,0XFE,0X00,0X80,
0X00,0X00,0X38,0X7F,0XF1,0X1E,0X7F,0XFF,0XFE,0X07,0XFF,0X01,0XC0,0X00,0X00,0X3C,
0X7F,0XF1,0X1E,0X7F,0XFF,0XFC,0X0F,0XFF,0X80,0X00,0X00,0X00,0X1C,0X7F,0XF1,0X1E,
0X7F,0XFF,0XFC,0X1F,0XFF,0X00,0X00,0X00,0X00,0X0E,0X7F,0XF1,0X1E,0X7F,0XFF,0XFC,
0X3F,0XFE,0X00,0X00,0X00,0X00,0X0E,0X3F,0XF1,0X1E,0X7F,0XFF,0XFC,0X7F,0XFC,0X00,
0X00,0X00,0X00,0X07,0X1F,0XF1,0X1E,0X7F,0XFF,0XF8,0XFF,0XFE,0X00,0X00,0X00,0X00,
0X03,0X1F,0XF1,0X1E,0X7F,0XFF,0XF1,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X01,0X8F,0XF0,
0X1E,0X7F,0XFF,0XE3,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X01,0X8F,0XF0,0X1E,0X7F,0XFF,
0XE3,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X0F,0XF0,0X00,0X7F,0XFF,0XC3,0XFF,0XFF,
0XDF,0X80,0X00,0X00,0X00,0X0F,0XF0,0X00,0X7F,0XFF,0XC3,0XFF,0XFF,0XCF,0XE0,0X00,
0X00,0X00,0X0F,0XF0,0X00,0X7F,0XFF,0XC3,0XFF,0XFF,0XC7,0XF0,0X00,0X00,0X00,0X0F,
0XFF,0XFF,0XFF,0XFF,0XC7,0XFF,0XFF,0XE1,0XFC,0X00,0X00,0X00,0X0F,0XF3,0XFF,0XFF,
0XFF,0X87,0XFF,0XFF,0XF0,0X1F,0X80,0X00,0X01,0X0F,0XF1,0XFF,0XFF,0XFF,0X8F,0XFF,
0XFF,0XFE,0X03,0XFF,0XF0,0X06,0X7F,0XF8,0X7F,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,0X80,
0X3F,0XFE,0X18,0X7F,0XF8,0X3F,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XF0,0X00,0X01,0XC0,
0XFF,0XFE,0X1F,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X01,0XFF,0XFF,0X07,
0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0XFF,0XFF,0X83,0XFF,0XFF,0X0F,
0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X03,0XFF,0XFF,0XE0,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XF0,0X7F,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE3,0XFF,0XFF,0XF8,0X7F,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,
0XE0,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XC1,0XFF,0XFF,
0X87,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0X07,0XFF,0XFF,0X87,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFE,0X0F,0XFF,0XFF,0X83,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE3,0XFF,0XF8,0X1F,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,
0XF0,0X7F,0XFF,0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0XFF,0XF1,0XFF,0XFF,
0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0XFF,0XF3,0XFF,0XFF,0XFF,0XF1,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,
0XFF,0XFC,0X00,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0XFF,0XF8,0X00,
0X7F,0XFF,0XFC,0X3F,0XFF,0XF8,0XFF,0XFF,0XFF,0XF3,0XFF,0XF8,0X00,0X7F,0XFF,0XFE,
0X0F,0XFF,0XF0,0XFF,0XFF,0XFF,0XF3,0XFF,0XF8,0XC4,0XFF,0XFF,0XFF,0X87,0XFF,0XC0,
0XFF,0XFF,0XFF,0XF1,0XFF,0XF1,0XE7,0XFF,0XFF,0XFF,0XC3,0XFF,0XC1,0XFF,0XFF,0XFF,
0XF1,0XFF,0XF1,0XE7,0XFF,0XFF,0XFF,0XF0,0XFF,0X83,0XFF,0XFF,0XFF,0XF1,0XFF,0XF1,
0XE7,0XFF,0XFF,0XFF,0XF8,0XFF,0X07,0XFF,0XFF,0XFF,0XF1,0XFF,0XF1,0XE7,0XFF,0XFF,
0XFF,0XF8,0XFE,0X0F,0XFF,0XFF,0XFF,0XF1,0XFF,0XF1,0XE7,0XFF,0XFF,0XFF,0XFC,0XFE,
0X3F,0XFF,0XFF,0XFF,0XF1,0XFF,0XF1,0XE7,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,
0XFF,0XF1,0XFF,0XF1,0XE7,0XFF,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,
0XF1,0XE7,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF0,0XE7,0XFF,
0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF8,0X00,0X7F,0XFF,0XFF,0XFF,
0X3F,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XF8,0X00,0X7F,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,
0XFF,0XFF,0XF1,0XFF,0XFC,0X00,0X7F,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XF1,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XF0,0XFF,0XF0,0X00,0XFF,0XFF,0XFF,
0XFF,0X1F,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF0,0X00,0X7F,0XFF,0XFF,0XFF,0X0F,0XFF,
0XFF,0XFF,0XFF,0XF0,0X7F,0XF0,0X00,0X7F,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,
0XF0,0X7F,0XFF,0XF8,0X7F,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XFF,
0XFC,0X7F,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XFF,0XFC,0X7F,0XFF,
0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0X87,
0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XC7,0XFF,0XFF,0XFF,
0XFF,0XF0,0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,
0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF0,0X00,0X7F,
0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,0XE0,0X7F,0XF0,0X00,0X7F,0XFF,0XFF,0XFF,
0XC3,0XFF,0XFF,0XFF,0XFF,0XE0,0X7F,0XF0,0X00,0X7F,0XFF,0XFF,0XFF,0XE1,0XFF,0XFF,
0XFF,0XFF,0XE0,0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0XFF,0XE0,
0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFC,
0X7F,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,
0XFF,0XF8,0X7F,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XF8,0X3F,
0XFF,0XFF,0XFF,0XC4,0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XFF,
0X86,0X7F,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0X84,0X7F,0XFF,
0XF8,0X7F,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0X0C,0X7F,0XF0,0X00,0X7F,0XFF,
0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XFE,0X0C,0X7F,0XF0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,
0XC7,0XFF,0XFF,0XFE,0X1C,0X7F,0XF0,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,
0XFE,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC1,0XFF,0XFF,0XFE,0X3C,0X7F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X7F,0XFF,0XFE,0X7C,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X3F,0XFF,0XFC,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF8,0X1F,0XFF,0XF8,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,
0XFF,0XE1,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X3C,
0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X1C,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X20,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFC,0X70,0X0C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFC,0XF0,0X0C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X78,
0X0C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X38,0X0C,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0C,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X1C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0X80,0X7C,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XC0,0XFC,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,};



