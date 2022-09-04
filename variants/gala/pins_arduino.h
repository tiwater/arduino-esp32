#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

#define ST7789_DRIVER

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       20

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<48)?(p):-1)
#define digitalPinHasPWM(p)         (p < 46)

// Default pins for I2S
#ifndef PIN_I2S_MCK
	#define PIN_I2S_MCK	21
#endif

#ifndef PIN_I2S_SCK
  #define PIN_I2S_SCK 33
#endif

#ifndef PIN_I2S_FS
  #define PIN_I2S_FS 35
#endif

#ifndef PIN_I2S_SD
  #define PIN_I2S_SD 34	//36   //Shared pin in simplex mode
#endif

#ifndef PIN_I2S_SD_OUT
  #define PIN_I2S_SD_OUT  34 //36
#endif

#ifndef PIN_I2S_SD_IN
  #define PIN_I2S_SD_IN  36	//34
#endif

#define BOARD_HAS_SDMMC

#ifndef SDMMC_CLK
	#define SDMMC_CLK GPIO_NUM_43
#endif

#ifndef SDMMC_CMD
	#define SDMMC_CMD GPIO_NUM_44
#endif

#ifndef SDMMC_D0
	#define SDMMC_D0 GPIO_NUM_42
#endif

#ifndef SDMMC_D1
	#define SDMMC_D1 GPIO_NUM_41
#endif

#ifndef SDMMC_D2
	#define SDMMC_D2 GPIO_NUM_46
#endif

#ifndef SDMMC_D3
	#define SDMMC_D3 GPIO_NUM_47
#endif

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t SDA = 40;
static const uint8_t SCL = 39;

static const uint8_t SDA1 = 40;
static const uint8_t SCL1 = 39;

static const uint8_t SS    = 10;
static const uint8_t MOSI  = 11;
static const uint8_t MISO  = 13;
static const uint8_t SCK   = 12;

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;
static const uint8_t A6 = 7;
static const uint8_t A7 = 8;
static const uint8_t A8 = 9;
static const uint8_t A9 = 10;
static const uint8_t A10 = 11;
static const uint8_t A11 = 12;
static const uint8_t A12 = 13;
static const uint8_t A13 = 14;
static const uint8_t A14 = 15;
static const uint8_t A15 = 16;
static const uint8_t A16 = 17;
static const uint8_t A17 = 18;
static const uint8_t A18 = 19;
static const uint8_t A19 = 20;

static const uint8_t T1 = 1;
static const uint8_t T2 = 2;
static const uint8_t T3 = 3;
static const uint8_t T4 = 4;
static const uint8_t T5 = 5;
static const uint8_t T6 = 6;
static const uint8_t T7 = 7;
static const uint8_t T8 = 8;
static const uint8_t T9 = 9;
static const uint8_t T10 = 10;
static const uint8_t T11 = 11;
static const uint8_t T12 = 12;
static const uint8_t T13 = 13;
static const uint8_t T14 = 14;

static const uint8_t DAC1 = 17;
static const uint8_t DAC2 = 18;

#endif /* Pins_Arduino_h */
