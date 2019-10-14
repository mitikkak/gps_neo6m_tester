#include "Arduino.h"
#include "Components.h"

void readGps()
{
  while (Serial.available())
  {
      gps.encode(Serial.read());
  }
}

void loop()
{
    readGps();
}