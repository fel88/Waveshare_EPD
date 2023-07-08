/*****************************************************************************
* | File        :   EPD_SDCard.h
* | Author      :   Waveshare Team
* | Function    :   Show SDcard BMP picto e-paper
* | Info        :
*   Image scanning
*      Please use progressive scanning to generate images or fonts
*----------------
* | This version:   V1.0
* | Date        :   2018-01-11
* | Info        :   Basic version
*
******************************************************************************/
#ifndef __EPD_SDCARD_H__
#define __EPD_SDCARD_H__

#include "DEV_Config.h"
#include "GUI_Paint.h"
#include "SdFat.h"

// SD_FAT_TYPE = 0 for SdFat/File as defined in SdFatConfig.h,
// 1 for FAT16/FAT32, 2 for exFAT, 3 for FAT16/FAT32 and exFAT.
#define SD_FAT_TYPE 0
/*
  Change the value of SD_CS_PIN if you are using SPI and
  your hardware does not use the default value, SS.
  Common values are:
  Arduino Ethernet shield: pin 4
  Sparkfun SD shield: pin 8
  Adafruit SD shields and modules: pin 10
*/
#define SDCARD_SS_PIN 6
// SDCARD_SS_PIN is defined for the built-in SD on some boards.
#ifndef SDCARD_SS_PIN
const uint8_t SD_CS_PIN = SS;
#else   // SDCARD_SS_PIN
// Assume built-in SD is used.
const uint8_t SD_CS_PIN = SDCARD_SS_PIN;
#endif  // SDCARD_SS_PIN

// Try max SPI clock for an SD. Reduce SPI_CLOCK if errors occur.
#define SPI_CLOCK SD_SCK_MHZ(50)

// Try to select the best SD card configuration.
//#if HAS_SDIO_CLASS
//#define SD_CONFIG SdioConfig(FIFO_SDIO)
//#elif ENABLE_DEDICATED_SPI
//#define SD_CONFIG SdSpiConfig(SD_CS_PIN, DEDICATED_SPI, SPI_CLOCK)
//#else  // HAS_SDIO_CLASS
#define SD_CONFIG SdSpiConfig(SD_CS_PIN, SHARED_SPI, SPI_CLOCK)
//#endif  // HAS_SDIO_CLASS

#if SD_FAT_TYPE == 0
//SdFat sd;
//File dir;
//File file;
#elif SD_FAT_TYPE == 1
SdFat32 sd;
File32 dir;
File32 file;
#elif SD_FAT_TYPE == 2
SdExFat sd;
ExFile dir;
ExFile file;
#elif SD_FAT_TYPE == 3
SdFs sd;
FsFile dir;
FsFile file;
#else  // SD_FAT_TYPE
#error invalid SD_FAT_TYPE
#endif  // SD_FAT_TYPE
//------------------------------------------------------------------------------
// Store error strings in flash to save RAM.
#define error(s) sd.errorHalt(&Serial, F(s))
//------------------------------------------------------------------------------

typedef struct {
    UDOUBLE Size;
    UDOUBLE Index ;
    UDOUBLE Header_Size ;
    UDOUBLE Bit_Pixel ;
    UDOUBLE BMP_Width;
    UDOUBLE BMP_Height;
} BMP_HEADER;
extern BMP_HEADER BMP_Header;


UWORD SDCard_Read16(File& f);
UDOUBLE SDCard_Read32(File& f);
boolean SDCard_ReadBmpHeader(File& f);

void SDCard_Init(void);
void SDCard_ReadBMP(const char *BmpName, UWORD Xstart, UWORD Ystart);
void SDCard_Read_4GrayBMP(const char *BmpName, UWORD Xstart, UWORD Ystart);
void SDCard_Read_RGB_7Color(const char *path, UWORD Xstart, UWORD Ystart);
#endif


