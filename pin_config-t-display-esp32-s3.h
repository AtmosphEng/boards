#pragma once
//
// pin_config-t-dispay-esp32-s3.h
//

#define INTERRUPT_MODE 					FALLING

#define WIFI_CONNECT_WAIT_MAX        (30 * 1000)

//#define NTP_SERVER1                  "pool.ntp.org"
//#define NTP_SERVER2                  "time.nist.gov"
#define GMT_OFFSET_SEC               0
#define DAY_LIGHT_OFFSET_SEC         0
// if CUSTOM_TIMEZONE is not defined then TIMEZONE API used based on IP, check zones.h
// #define CUSTOM_TIMEZONE             "Europe/London"

/* Automatically update local time */
//#define GET_TIMEZONE_API             "https://ipapi.co/timezone/"

/* LCD CONFIG */
// Too low or too high pixel clock may cause screen mosaic
#define EXAMPLE_LCD_PIXEL_CLOCK_HZ   (16 * 1000 * 1000)
// The pixel number in horizontal and vertical
#define EXAMPLE_LCD_H_RES            320
#define EXAMPLE_LCD_V_RES            170
#define LVGL_LCD_BUF_SIZE            (EXAMPLE_LCD_H_RES * EXAMPLE_LCD_V_RES)
#define EXAMPLE_PSRAM_DATA_ALIGNMENT 64

/*ESP32S3*/

#define PIN_BUTTON_1		0 // IO00, TCM-UI LH button, tcm 'DOWN' & long press to enter/exit editing, also strap pin BOOT

//#define PIN_ENC1_OK        	1 // ENC1_LABEL_SW_OK - NOTE : Assigned in tcmenu designer. TCM-UI
//#define PIN_ENC1_A          	2 // ENC1_LABEL_A_DT - NOTE : Assigned in tcmenu designer. TCM-UI
//#define PIN_ENC1_B          	3 // ENC1_LABEL_B_CLK - NOTE : Assigned in tcmenu designer. TCM-UI
// GPIO01 spare                 1
//const int PIN_SERIAL2_RX	= 2;
//const int PIN_SERIAL2_TX	= 3;

#define PIN_BAT_VOLT		4

#define PIN_LCD_RES		5
#define PIN_LCD_CS		6
#define PIN_LCD_DC		7
#define PIN_LCD_WR		8
#define PIN_LCD_RD		9

//#define PIN_ENC2_OK        	10 // not required here.
#define PIN_ENC2_B          	10 // ENCx_LABEL_B_CLK
#define PIN_ENC2_A          	11 // ENCx_LABEL_A_DT

//#define PIN_ENC3_OK        	12 // not required here.
#define PIN_ENC3_B          	12 // ENCx_LABEL_B_CLK
#define PIN_ENC3_A          	13 // ENCx_LABEL_A_DT

/* External expansion */
// 10 SPI_CS
// 11 MOSI	SPI_D
// 12 SCK	SPI_CLK
// 13 MISO	SPI_Q
//#define PIN_SD_CLK		11
//#define PIN_SD_D0		12
//#define PIN_SD_CMD		13


#define PIN_BUTTON_2		14 // TCM-UI RH button, tcm 'UP' and long press to exit editing or jump to top menu item.

#define PIN_POWER_ON		15
//#define PIN_TOUCH_INT		16
//const int PIN_DEBUG_LED	= 16; // 2023-09-21 This pin doesnt work for LED. Why?

const int PIN_INTR_CCW_WHITE	= 16; // DIP-B08-IO16  assigned 2024-08-22 
//const int PIN_INTR_TCW_RED	= 17; // DIP-B06-IO17  assigned 2024-08-22

//#define PIN_IIC_SCL		17 // For IMU MPU-6050 on default I2C address.
//#define PIN_IIC_SDA		18 // For IMU MPU-6050 on default I2C address.
const int PIN_PWM_THROTTLE 	= 18; // DIP-B05-IO18  assigned 2024-08-20

const int PIN_DEBUG_LED		= 17; // DIP-B06-IO17  
//const int PIN_SERIAL2_RX	= 17;
//const int PIN_SERIAL2_TX	= 21;
//#define PIN_TOUCH_RES		21

//const int PIN_DEBUG_LED		= 21; // DIP-B07-IO21  
const int PIN_INTR_TCW_RED	= 21; // DIP-B07-IO21  assigned 2024-08-22

#define PIN_LCD_BL		38
#define PIN_LCD_D0		39
#define PIN_LCD_D1		40
#define PIN_LCD_D2		41
#define PIN_LCD_D3		42

const int PIN_SERVO_AIR_VALVE =	43; // DIP-B03-IO43  assigned 2024-08-23

// Grove-Pin1 GND
// Grove-Pin2 3V3
//const int PIN_SERIAL1_RX	= 43; // also Grove-Pin3  - 2024-04-03 testing for USB CDC mode UART pins
//const int PIN_SERIAL1_TX	= 44; // also Grove-Pin4  - 2024-04-03 testing for USB CDC mode UART pins

#define PIN_LCD_D4		45
#define PIN_LCD_D5		46
#define PIN_LCD_D6		47
#define PIN_LCD_D7		48

//#define	MYSERIAL0_BEGIN Serial0.begin(BAUD_SERIAL1, SERIAL_8N1, 19, 20);   // NB STD: ,, 16, 17	?
//#define	MYSERIAL0_BEGIN Serial0.begin(BAUD_SERIAL1, SERIAL_8N1, 20, 19);   // NB STD: ,, 16, 17	?
//#define	MYSERIAL1_BEGIN Serial1.begin(BAUD_SERIAL1, SERIAL_8N1, PIN_SERIAL1_RX, PIN_SERIAL1_TX);   // NB STD: ,, 16, 17	?
//#define	MYSERIAL2_BEGIN Serial2.begin(BAUD_SERIAL2, SERIAL_8N1, PIN_SERIAL2_RX, PIN_SERIAL2_TX); // NB STD: ,, 15,4 ?
//#define	MYSERIAL2_BEGIN Serial2.begin(BAUD_SERIAL2, SERIAL_8N1, 12, 13);
#define	MYSERIAL2_BEGIN Serial2.begin(BAUD_SERIAL2, SERIAL_8N1, 13, 12);


// END_OF_FILE
