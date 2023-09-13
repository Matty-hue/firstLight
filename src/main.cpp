#include <Arduino.h>

int n = 0;

void setup() 
{
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);

    Serial.println(sin(n*2*3.1416/20));
    n++;
}