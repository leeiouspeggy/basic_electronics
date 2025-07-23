#include <Arduino.h>
const int signalPin = 25;

void setup() {
  Serial.begin(115200);
  pinMode(signalPin, INPUT);

}

void loop() {
  int signalState = digitalRead(signalPin);
  if (signalState == HIGH) {
    Serial.println("High voltage detected!"); 
 } else{ 
    Serial.println("No High voltage detected (safe).");
}
 delay(500);
}