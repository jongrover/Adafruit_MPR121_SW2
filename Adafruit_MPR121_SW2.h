/*!
 * @file Adafruit_MPR121_SW2.h
 *
  This is a library for the MPR121 12-Channel Capacitive Sensor

  Designed specifically to work with the MPR121 breakout from Adafruit
  ----> https://www.adafruit.com/products/1982

  These sensors use I2C to communicate, 2+ pins are required to
  interface
  Adafruit invests time and resources providing this open source code,
  please support Adafruit and open-source hardware by purchasing
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.
  BSD license, all text above must be included in any redistribution
 *
 */

#ifndef ADAFRUIT_MPR121_SW2_H
#define ADAFRUIT_MPR121_SW2_H

#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include <Wire.h>
#include <SoftwareWire.h>

// The default I2C address
#define MPR121_SW2_I2CADDR_DEFAULT 0x5A ///< default I2C address

/**
 *****************************************************************************************
 *  @brief      Device register map
 ****************************************************************************************/
enum {
  MPR121_SW2_TOUCHSTATUS_L = 0x00,
  MPR121_SW2_TOUCHSTATUS_H = 0x01,
  MPR121_SW2_FILTDATA_0L  = 0x04,
  MPR121_SW2_FILTDATA_0H  = 0x05,
  MPR121_SW2_BASELINE_0   = 0x1E,
  MPR121_SW2_MHDR         = 0x2B,
  MPR121_SW2_NHDR         = 0x2C,
  MPR121_SW2_NCLR         = 0x2D,
  MPR121_SW2_FDLR         = 0x2E,
  MPR121_SW2_MHDF         = 0x2F,
  MPR121_SW2_NHDF         = 0x30,
  MPR121_SW2_NCLF         = 0x31,
  MPR121_SW2_FDLF         = 0x32,
  MPR121_SW2_NHDT         = 0x33,
  MPR121_SW2_NCLT         = 0x34,
  MPR121_SW2_FDLT         = 0x35,

  MPR121_SW2_TOUCHTH_0    = 0x41,
  MPR121_SW2_RELEASETH_0    = 0x42,
  MPR121_SW2_DEBOUNCE = 0x5B,
  MPR121_SW2_CONFIG1 = 0x5C,
  MPR121_SW2_CONFIG2 = 0x5D,
  MPR121_SW2_CHARGECURR_0 = 0x5F,
  MPR121_SW2_CHARGETIME_1 = 0x6C,
  MPR121_SW2_ECR = 0x5E,
  MPR121_SW2_AUTOCONFIG0 = 0x7B,
  MPR121_SW2_AUTOCONFIG1 = 0x7C,
  MPR121_SW2_UPLIMIT   = 0x7D,
  MPR121_SW2_LOWLIMIT  = 0x7E,
  MPR121_SW2_TARGETLIMIT  = 0x7F,

  MPR121_SW2_GPIODIR  = 0x76,
  MPR121_SW2_GPIOEN   = 0x77,
  MPR121_SW2_GPIOSET  = 0x78,
  MPR121_SW2_GPIOCLR  = 0x79,
  MPR121_SW2_GPIOTOGGLE  = 0x7A,

  MPR121_SW2_SOFTRESET = 0x80,
};

//.. thru to 0x1C/0x1D

/**************************************************************************/
/*!
    @brief  Class that stores state and functions for interacting with MPR121
    proximity capacitive touch sensor controller.
*/
/**************************************************************************/
class Adafruit_MPR121_SW2 {
 public:
  // Hardware I2C
  Adafruit_MPR121_SW2(void);

  boolean begin(uint8_t i2caddr = MPR121_SW2_I2CADDR_DEFAULT);

  uint16_t filteredData(uint8_t t);
  uint16_t  baselineData(uint8_t t);

  uint8_t readRegister8(uint8_t reg);
  uint16_t readRegister16(uint8_t reg);
  void writeRegister(uint8_t reg, uint8_t value);
  uint16_t touched(void);
  // Add deprecated attribute so that the compiler shows a warning
  void setThreshholds(uint8_t touch, uint8_t release) __attribute__((deprecated));
  void setThresholds(uint8_t touch, uint8_t release);

 private:
  int8_t _i2caddr;
};

#endif // ADAFRUIT_MPR121_SW2_H
