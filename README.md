# Hacked ADAFruit MPR121 Library to use SoftwareWire instead of Wire library

You can use this library along side the original Adafruit MPR121 library to connect 8 or more MPR121 capacitive touch boards at the same time. See my example code in the examples folder. I used an Arduino Mega and set the first 4 boards i call A through D on pins 20 and 21 of Arduino these pins are using the standard Adafruit_MPR121 library that relies on the Wire library. Then on self assigned pins 18, 19 i use to talk to boards 5 to 8 i call E though H, I'm using my modified Adafruit_MPR121_SW2 library that relies on the SoftwareWire library instead. In this case I'm using these 8 boards to allow for 96 separate triggers to playback 96 WAV files via talking to the Sparkfun Tsunami Super WAV Trigger yet another library for using Arduino to talk to Sparkfun Tsunami Wav Trigger boards.

# Dependency Libraries for Example Code

- Wire
- SoftwareWire
- Adafruit_MPR121
- MPR121_SW2 (this library)
- Metro
- Tsunami
- AltsoftSerial

---

# Adafruit MPR121 Library [![Build Status](https://travis-ci.org/adafruit/Adafruit_MPR121.svg?branch=master)](https://travis-ci.org/adafruit/Adafruit_MPR121)

<img src="https://cdn-shop.adafruit.com/970x728/1982-00.jpg" height="300"/>

This is a library for the Adafruit MPR121 Capacitive touch sensor breakout:
  * https://www.adafruit.com/products/1982

Check out the links above for our tutorials and wiring diagrams. This chip uses I2C to communicate

Adafruit invests time and resources providing this open source code, please support Adafruit and open-source hardware by purchasing products from Adafruit!

Written by Limor Fried/Ladyada for Adafruit Industries.
MIT license, all text above must be included in any redistribution

<!-- START COMPATIBILITY TABLE -->

## Compatibility

MCU                | Tested Works | Doesn't Work | Not Tested  | Notes
------------------ | :----------: | :----------: | :---------: | -----
Atmega328 @ 16MHz  |      X       |             |            |
Atmega328 @ 12MHz  |      X       |             |            |
Atmega32u4 @ 16MHz |      X       |             |            |
Atmega32u4 @ 8MHz  |      X       |             |            |
ESP8266            |      X       |             |            |
Atmega2560 @ 16MHz |      X       |             |            |
ATSAM3X8E          |             |      X       |            |
ATSAM21D           |      X       |             |            |
ATtiny85 @ 16MHz   |             |             |     X       |
ATtiny85 @ 8MHz    |             |             |     X       |
Intel Curie @ 32MHz |             |             |     X       |
STM32F2            |             |             |     X       |

  * ATmega328 @ 16MHz : Arduino UNO, Adafruit Pro Trinket 5V, Adafruit Metro 328, Adafruit Metro Mini
  * ATmega328 @ 12MHz : Adafruit Pro Trinket 3V
  * ATmega32u4 @ 16MHz : Arduino Leonardo, Arduino Micro, Arduino Yun, Teensy 2.0
  * ATmega32u4 @ 8MHz : Adafruit Flora, Bluefruit Micro
  * ESP8266 : Adafruit Huzzah
  * ATmega2560 @ 16MHz : Arduino Mega
  * ATSAM3X8E : Arduino Due
  * ATSAM21D : Arduino Zero, M0 Pro
  * ATtiny85 @ 16MHz : Adafruit Trinket 5V
  * ATtiny85 @ 8MHz : Adafruit Gemma, Arduino Gemma, Adafruit Trinket 3V

<!-- END COMPATIBILITY TABLE -->
