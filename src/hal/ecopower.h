// clang-format off

#ifndef _GENERIC_H
#define _GENERIC_H

#include <stdint.h>

#define HAS_LORA 1 // comment out if device shall not send data via LoRa or has no LoRa

#define CFG_sx1276_radio 1 // select LoRa chip

//#define BOARD_HAS_PSRAM // use if board has external PSRAM
//#define DISABLE_BROWNOUT 1 // comment out if you want to keep brownout feature

#define HAS_DISPLAY U8X8_SSD1306_128X64_NONAME_HW_I2C
//#define DISPLAY_FLIP  1 // use if display is rotated
#define BAT_MEASURE_ADC ADC1_GPIO35_CHANNEL // battery probe GPIO pin -> ADC1_CHANNEL_7
#define BAT_VOLTAGE_DIVIDER ((82.0+220.0)/82.0) // 82k + 220k 1%
#define BAT_MEASURE_EN   EXT_POWER_SW  // Turn power on for messurement

#define EXT_POWER_SW    15            // Switch VDD on pin JP10
#define EXT_POWER_ON    0
#define EXT_POWER_OFF   1

#define HAS_LED (12) // on board  LED
//#define HAS_BUTTON (0) // on board button

// Pins for I2C interface of OLED Display
#define MY_OLED_SDA (21)
#define MY_OLED_SCL (22)
#define MY_OLED_RST U8X8_PIN_NONE

// Settings for on board DS3231 RTC chip
// note: to use RTC_INT, ext_power_on is needed!
#define HAS_RTC MY_OLED_SDA, MY_OLED_SCL // SDA, SCL
#define RTC_INT GPIO_NUM_0

// Settings for IF482 interface
#define HAS_IF482 9600, SERIAL_7E1, GPIO_NUM_27, GPIO_NUM_14 // JP8 #12/#13

// Settings for DCF77 interface
//#define HAS_DCF77 GPIO_NUM_14 // JP8 #13
//#define DCF77_ACTIVE_LOW 1

// Pins for LORA chip SPI interface, reset line and interrupt lines
#define LORA_SCK  (18) 
#define LORA_CS   (5)
#define LORA_MISO (19)
#define LORA_MOSI (23)
#define LORA_RST  (17)
#define LORA_IRQ  (16)
#define LORA_IO1  (4) // JP9 #8 to be external wired
#define LORA_IO2  LMIC_UNUSED_PIN

#endif