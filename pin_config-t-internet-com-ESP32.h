//
// pin_config-t-internet-com-ESP32.h
//
#ifndef PIN_CONFIG_T_TINTERNET_COM_ESP32_H
#define PIN_CONFIG_T_TINTERNET_COM_ESP32_H


// T-INTERNET-COM-ESP32 *******************************************************************************

//#define PIN_LCD_RES           NOT_USED		// NOTE : Can be assigned in tcmenu designer.
//#define PIN_LCD_BL            NOT_USED		// NOTE : Can be assigned in tcmenu designer.

//#define PIN_SERIAL0_TX    		1 // NOTE : Assigned by IDE.
//#define SD_MISO             2 // 
#define PIN_SERIAL1_TX       2 // DUPLICATE WITH ABOVE.
#define PIN_LED_NEOPIXEL		12 // 1x Neopixel RGB LED.
//#define SD_CS               13
#define PIN_SERIAL2_RX     	13 // DUPLICATE WITH ABOVE.
//#define SD_SCLK             14
#define PIN_SERIAL2_TX     	14 // DUPLICATE WITH ABOVE.
//#define SD_MOSI             15
#define PIN_SERIAL1_RX     	15 // DUPLICATE WITH ABOVE. receive Pin UART1  AAA Actually ESP32 Dev port U2
#define ETH_MDIO_PIN       	18
//#define PIN_SERIAL0_RX       21 //  NOTE : Assigned by IDE.
#define ETH_MDC_PIN        	23
//#define PIN_LED_IO32     		32 // NOTE THIS WAS IO12 RGB LED AND IT DOESNT CHANGE WITH SIMPLE BINARY OUTPUT.
//#define PIN_LED_IO33     		33 // DUPLICATE WITH ABOVE. AAAFIXME

//#define MYSERIAL0_BEGIN Serial0.begin(BAUD_SERIAL0, SERIAL_8N1, PIN_SERIAL0_RX, PIN_SERIAL0_TX); // NB STD: ,, 21,  1

#define	MYSERIAL1_BEGIN Serial1.begin(BAUD_SERIAL1, SERIAL_8N1, PIN_SERIAL1_RX, PIN_SERIAL1_TX);   // NB STD: ,, 16, 17	

#define	MYSERIAL2_BEGIN Serial2.begin(BAUD_SERIAL2, SERIAL_8N1, PIN_SERIAL2_RX, PIN_SERIAL2_TX);   // NB STD: ,, 15,  4 


// T-INTERNET-COM-ESP32 *******************************************************************************

#endif
// END_OF_FILE


