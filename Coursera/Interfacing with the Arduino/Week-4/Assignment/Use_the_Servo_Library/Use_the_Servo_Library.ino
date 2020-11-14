#include <Servo.h>

int ledPin = 6;
int potPin = A0;

int potValue = 0;

Servo led;

void setup(void)
{
    pinMode(potPin, INPUT);
    led.attach(ledPin);
}

void loop(void)
{
    potValue = analogRead(potPin);
    potValue = map(potValue, 0, 1023, 0, 255);
    led.write(potValue);
}
