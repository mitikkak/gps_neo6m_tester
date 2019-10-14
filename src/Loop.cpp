#include "Arduino.h"
#include "Components.h"

void readGps()
{
  while (Serial.available())
  {
      gps << Serial.read();
  }
}

void loop()
{
    readGps();
    
}