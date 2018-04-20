#include "MockResistor.h"

MockResistor::MockResistor(int pin) {
  outputPin = pin;
  pinMode(outputPin, OUTPUT);
}

void MockResistor::setOutputPower(int outputPower) {
  Serial.print("Set brightness to ");
  Serial.println(outputPower);
  
  analogWrite(outputPin, outputPower); 
  analogWrite(10, outputPower); 
  analogWrite(11, outputPower); 
}
