#include "Regulator.h"
#include "MockResistor.h"
#include "MockTemperatureSensor.h"
#include "PidCalculator.h"

Regulator::Regulator(int pin, double sp, double kp, double ki, double kd) {
  resistor = new MockResistor(pin);
  temperatureSensor = new MockTemperatureSensor();
  pidCalculator = new PidCalculator(sp, kp, ki, kd);
}

void Regulator::setOutputPower(int outputPower) {
  resistor->setOutputPower(outputPower);
}

double Regulator::getTemperature(void) {
  return temperatureSensor->getTemperature();
}

double Regulator::calculate(double pv) {
  return pidCalculator->calculate(pv);
}
