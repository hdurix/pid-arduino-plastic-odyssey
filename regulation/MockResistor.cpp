#include "MockResistor.h"

MockResistor::MockResistor() {
  ledLight = 9;
  pinMode(ledLight, OUTPUT);
}

void MockResistor::enableLight(void) {
  Serial.println("Enable light");
  digitalWrite(ledLight, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void MockResistor::disableLight(void) {
  Serial.println("Disable light");
  digitalWrite(ledLight, LOW);    // turn the LED off by making the voltage LOW
}

void MockResistor::setBrightness(int brightness) {
  Serial.print("Set brightness to ");
  Serial.println(brightness);
  
  analogWrite(ledLight, brightness); 
}
