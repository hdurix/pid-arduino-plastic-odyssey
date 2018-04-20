#include "MockResistor.h"

MockResistor::MockResistor(int pin) {
  outputPin = pin;
  pinMode(outputPin, OUTPUT);
}

void MockResistor::enableLight(void) {
  Serial.println("Enable light");
  digitalWrite(outputPin, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void MockResistor::disableLight(void) {
  Serial.println("Disable light");
  digitalWrite(outputPin, LOW);    // turn the LED off by making the voltage LOW
}

void MockResistor::setBrightness(int brightness) {
  Serial.print("Set brightness to ");
  Serial.println(brightness);
  
  analogWrite(outputPin, brightness); 
  analogWrite(10, brightness); 
  analogWrite(11, brightness); 
}
