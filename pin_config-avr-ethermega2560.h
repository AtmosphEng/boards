#pragma once

// avr-mega2560 *******************************************************************************

// ANALOG PINS ************************************************************************************
// A0 used for LCD 16x2 shield for polling / reading all operational buttons via resistor network.
// A5 used for LCD 16x2 shield (AAA Freetronics pcb mod to relocate D9 to A5)

#define PIN_DUMMY_GROUND_A11 A11 // For Mega wiring convenience of rotary encoder0
#define PIN_DUMMY_5V0_A12 A12    // For Mega wiring convenience of rotary encoder0

// encoder0 - slot 0 - for menu navigation
//#define PIN_ENCODER0_PBSW_A13 A13 // Assigned in tcmenu Designer Code Generator.
//#define PIN_ENCODER0_CLK_A14 A14 // Assigned in tcmenu Designer Code Generator.
//#define PIN_ENCODER0_DAT_A15 A15 // Assigned in tcmenu Designer Code Generator.


// DIGITAL PINS ***********************************************************************************

// D0 USB PROG / SERIAL(0)
// D1 USB PROG / SERIAL(0)

#define INTERRUPT_MODE FALLING
#define PIN_NUMBER_INTERRUPT_D2 2
#define PIN_NUMBER_INTERRUPT_D3 3
const int PIN_DIN_LIMIT_SW_DEST_TCW_WHITE_P2 = 2; // TRUE_CLOCK_WISE (TCW).
const int PIN_DIN_LIMIT_SW_DEST_CCW_RED_P3 = 3; // COUNTER_CLOCK_WISE (CCW).

// D4 (SD) Card CS Adafruit Product ID 1651 LCD ILI9341 320x340. See shield PCD bottom side silk sceen.

#define PIN_DOUT_SERVO_AIR_VALVE 5 // AAAETHER Moved from D11 to D5 for compatibility with Freetronics Ethermega

// #define DEF_MEGA2560_10BIT_PWM_THROTTLE_TIMER4_PIN6 // If COMMENTED-OUT, then use 8-bit PWM with analogWrite();
#define PIN_PWM_THROTTLE 6 // D06 10-bit Timer3 PWM capable pin on MEGA2560 for Krida dimmer.
// D7 - SPARE
// D8 TS CS (TOUCHSCREEN CS) Adafruit Product ID 1651 LCD ILI9341 320x340. See shield PCD bottom side silk sceen.

// LCD DISPLAY CONTROLLER ILI9341 FOR SPI DISPLAY 320x240. DEFINED IN TCMENU DESIGNER USING GENERATE CODE.
// USES DESIGNER AdafruitGFX quick start for 5110 ST77xx ILI9341
// D9 ILI9341 TCMENU RS Pin (SPI only)
// D10 ILI9341 TCMENU CS Pin (SPI only). 2023-04-07 Also CLASH with AAAETHER on ETHERMEGA LAN CS, but works OK?
// TCMENU CS Pin Optional Reset Pin - CURRENTLY DISABLED (-1) IN TCMENU CODE GENERATOR.

#ifdef DEF_MEGA2560_10BIT_PWM_THROTTLE_TIMER4_PIN6
#include "TimerFour.h"
#endif

#define PIN_ETHERNET_CS		10

#define PIN_DEBUG_LED		13

#define PIN_DUMMY_GROUND_D20 20 // For Mega wiring convenience.

// encoder3 - for direct control of ANALOGMENUITEM
#define PIN_ENCODER3_CLK_D22 22
#define PIN_ENCODER3_DAT_D24 24
// encoder3 pushbutton on D26 is not used here.
#define PIN_DUMMY_5V0_D28 28    // For Mega wiring convenience of rotary encoder3
#define PIN_DUMMY_GROUND_D30 30 // For Mega wiring convenience of rotary encoder3

// encoder2 - for direct control of ANALOGMENUITEM
#define PIN_ENCODER2_CLK_D38 38
#define PIN_ENCODER2_DAT_D40 40
// encoder2 pushbutton on D42 is not used here.
#define PIN_DUMMY_5V0_D44 44    // For Mega wiring convenience of rotary encoder2
#define PIN_DUMMY_GROUND_D46 46 // For Mega wiring convenience of rotary encoder2

// ON MEGA2560, NOTE THAT SPI MISO is on D50
// ON MEGA2560, NOTE THAT SPI MOSI is on D51
// ON MEGA2560, NOTE THAT SPI SCK is on D52

// ARDUINO EEPROM ADDRESSES ***********************************************************************
#define ADDR_EEP_ANGLE_MIN_ABS 0x11
#define ADDR_EEP_ANGLE_LOW_CCW_OPS 0x12
#define ADDR_EEP_ANGLE_MID_ABS 0x13
#define ADDR_EEP_ANGLE_HIGH_TCW_OPS 0x14
#define ADDR_EEP_ANGLE_MAX_ABS 0x15

#define	MYSERIAL1_BEGIN Serial1.begin(BAUD_SERIAL1, SERIAL_8N1); // AVR has 2 params, ESP32 has 4.
#define	MYSERIAL2_BEGIN Serial2.begin(BAUD_SERIAL2, SERIAL_8N1); // AVR has 2 params, ESP32 has 4.
#define	MYSERIAL3_BEGIN Serial3.begin(BAUD_SERIAL2, SERIAL_8N1); // AVR has 2 params, ESP32 has 4.


// avr-mega2560 ***********************************************************************************

// END_OF_FILE
