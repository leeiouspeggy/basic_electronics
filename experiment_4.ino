#include <Arduino.h>
const int potPin = 15;
const int ledPin = 2;   

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int potValue = analogRead(potPin);  // Read analog value (0-4095)
  int brightness = map(potValue, 0, 4095, 0, 255);

  analogWrite(ledPin, brightness);
  delay(10);
  Serial.println(brightness);

}
  

