#pragma once

#define INTERRUPT_MODE 					FALLING

// T_EMBED ESP32-S3 *******************************************************************************
//#define PIN_ENCODE_BTN        0 // NOTE : Assigned in tcmenu designer. ALSO ESP32 BOOT IO00
//#define PIN_ENCODE_B          1 // NOTE : Assigned in tcmenu designer
//#define PIN_ENCODE_A          2 // NOTE : Assigned in tcmenu designer

#define PIN_BAT_VOLT          4

#define PIN_IIS_WCLK          5
#define PIN_IIS_DOUT          6
#define PIN_IIS_BCLK          7

#define PIN_IIC_SCL           8

#define PIN_LCD_RES           9
#define PIN_LCD_CS            10
#define PIN_LCD_MOSI          11
#define PIN_LCD_CLK           12
#define PIN_LCD_DC            13

#define PIN_ES7210_DIN        14

#define PIN_LCD_BL            15

const int PIN_INTR_CCW_WHITE			= 16; // CN1_P04_IO16_GREY_BB_E17
const int PIN_INTR_TCW_RED			= 17; // CN1_P03_IO17_GREEN_BB_E07


#define PIN_IIC_SDA           18

#define PIN_ES7210_LRCK       21

//#define PIN_SD_MISO           38
const int PIN_DEBUG_LED 				= 38; // CN1_P09_IO38_GREEN_BB_E20

#define PIN_SD_CS             39

//#define PIN_SD_SCK            40
const int PIN_PWM_THROTTLE 				= 40; // CN1_P10_IO40_GREY_BB_E25

//#define PIN_SD_MOSI           41
const int PIN_SERVO_AIR_VALVE			= 41; // CN1_P11_IO41_WHITE_BB_E30

#define PIN_APA102_DI         42

#define PIN_SERIAL1_TX        43
#define PIN_SERIAL1_RX        44

#define PIN_APA102_CLK        45

#define PIN_POWER_ON          46

#define PIN_ES7210_BCLK       47
#define PIN_ES7210_MCLK       48
// T_EMBED ESP32-S3 *******************************************************************************

//#define MYSERIAL1_BEGIN Serial1.begin(BAUD_SERIAL1, SERIAL_8N1, PIN_SERIAL1_RX, PIN_SERIAL1_TX); // CNG-P4, CNG-P3
//#define MYSERIAL2_BEGIN Serial2.begin(BAUD_SERIAL1, SERIAL_8N1, PIN_SERIAL1_RX, PIN_SERIAL1_TX); // CNG-P4, CNG-P3.
// 2024-10-14 The t-embed serial port on GROVE conn. is NOT currently working w. embedCONTROL. However, Serial is OK.


// END_OF_FILE

