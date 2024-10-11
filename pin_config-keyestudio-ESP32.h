#pragma once

// KEYESTUDIO-ESP32 *******************************************************************************

//#define PIN_LCD_RES           NOT_USED		// NOTE : Can be assigned in tcmenu designer.
//#define PIN_LCD_BL            NOT_USED		// NOTE : Can be assigned in tcmenu designer.

// BOOT 0 // IO00 - 2-button DOWN test. Many boards use a button marked “Flash” “BOOT” that pulls GPIO0 low when pressed.

//#define PIN_SERIAL0_TX        1	// NOTE : Assigned by IDE.

#define PIN_DEBUG_LED			2 // Monorail SmartCar

#define PIN_SERIAL2_TX        4

//#define PIN_DEBUG_LED			5 // ESP32-WROOM-32 keystudio bare breadboard module

#define PIN_LCD_DC            14	// NOTE : Assigned in tcmenu designer.

#define PIN_SERIAL2_RX        15

#define PIN_SERIAL1_RX        16
#define PIN_SERIAL1_TX        17

#define PIN_LCD_CLK           18

// 2-button UP test 		19

//#define PIN_SERIAL0_RX      21	// NOTE : Assigned by IDE.

#define PIN_LCD_MOSI          23
#define PIN_LCD_CS            27	// NOTE : Assigned in tcmenu designer.

//#define PIN_ENCODE_A          32 // NOTE : Assigned in tcmenu designer.
//#define PIN_ENCODE_B          33 // NOTE : Assigned in tcmenu designer.
//#define PIN_ENCODE_BTN        35 // NOTE : Assigned in tcmenu designer.


//#define MYSERIAL0_BEGIN Serial0.begin(BAUD_SERIAL0, SERIAL_8N1, PIN_SERIAL0_RX, PIN_SERIAL0_TX);	// ,, 21,  1

#define	MYSERIAL1_BEGIN Serial1.begin(BAUD_SERIAL1, SERIAL_8N1, PIN_SERIAL1_RX, PIN_SERIAL1_TX);	// ,, 16, 17	

#define	MYSERIAL2_BEGIN Serial2.begin(BAUD_SERIAL2, SERIAL_8N1, PIN_SERIAL2_RX, PIN_SERIAL2_TX);	// ,, 15,  4 


// KEYESTUDIO-ESP32 *******************************************************************************


// END_OF_FILE

