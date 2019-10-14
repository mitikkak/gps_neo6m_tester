
#include "Components.h"

TinyGPSPlus gps;
LcdIf lcd;

#if defined ESP8266
Adafruit_PCD8544 lcdImpl = Adafruit_PCD8544(D3, D2, D1);
#elif defined ESP32
const uint8_t CLK = 25;
const uint8_t DIN = 26;
const uint8_t DC = 27;
const uint8_t CE = 14;
const uint8_t RESET = 12;
Adafruit_PCD8544 lcdImpl = Adafruit_PCD8544(CLK, DIN, DC, CE, RESET);
#else
#error Non-supported platform for lcd!
#endif