#ifndef _VARIANT_ESP32C3_SUPER_MINI_
#define _VARIANT_ESP32C3_SUPER_MINI_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// I2C (Wire) & OLED
#define WIRE_INTERFACES_COUNT (1)
#define I2C_SDA (1)
#define I2C_SCL (0)

#define USE_SSD1306

// GPS
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN (20)
#define GPS_TX_PIN (21)

// Button
//#define BUTTON_PIN (9) // BOOT button
// Battery voltage measurement
#define BATTERY_PIN (2)  // ADC1_CH2
#define ADC_CHANNEL ADC1_CHANNEL_2  // ESP32-C3 ADC channel for GPIO2
#define ADC_MULTIPLIER 2.025 // Adjust based on your voltage divider ( was 2.004 MC31)
#define ADC_ATTENUATION ADC_ATTEN_DB_12 // 0-3.3V range (replaces deprecated ADC_ATTEN_DB_11)

// LoRa
#define USE_LLCC68
#define USE_SX1262
// #define USE_RF95
#define USE_SX1268

/// Set pinout for  XIAO ESP32C3+ SX1262
#define LORA_DIO0 RADIOLIB_NC
#define LORA_RESET (4)     //was 5
#define LORA_DIO1 (3)      //was 3
#define LORA_RXEN (7)      //was 2
#define LORA_BUSY (5)      //was 4 
#define LORA_SCK (8)      //was 10
#define LORA_MISO (9)      //was 6
#define LORA_MOSI (10)      //was 7
#define LORA_CS (6)        //was 8

#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN LORA_RXEN

#define SX126X_DIO3_TCXO_VOLTAGE (1.8)
#define TCXO_OPTIONAL // make it so that the firmware can try both TCXO and XTAL

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
