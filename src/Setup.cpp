#include "Arduino.h"
#include "Components.h"

void setup()
{
    Serial.begin(9600);
    lcd.begin(50);
    lcd.print("GPS Neo6m tester");
}