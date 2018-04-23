#include "Resistor.h"

Resistor::Resistor(int pin) {
  outputPin = pin;
  pinMode(outputPin, OUTPUT);
}

void Resistor::setOutputPower(int outputPower) {
  Serial.print("Set output power to ");
  Serial.println(outputPower);
  
  // TODO: set output power to real resistor
  analogWrite(outputPin, outputPower);
}
