#include "Regulator.h"
#include "Resistor.h"
#include "TemperatureSensor.h"
#include "PidCalculator.h"

Regulator::Regulator(int pin, double sp, double kp, double ki, double kd) {
  resistor = new Resistor(pin);
  temperatureSensor = new TemperatureSensor();
  pidCalculator = new PidCalculator(sp, kp, ki, kd);
}

double Regulator::getTemperature(void) {
  double temperature = temperatureSensor->getTemperature();
  
  Serial.print("Current temperature is: ");
  Serial.println(temperature);

  return temperature;
}

double Regulator::calculatePid(double temperature) {
  double pidResult = pidCalculator->calculate(temperature);

  Serial.print("PID result:");
  Serial.println(pidResult);

  return pidResult;
}

void Regulator::setOutputPower(int outputPower) {
  Serial.print("Set output power to: ");
  Serial.println(outputPower);

  resistor->setOutputPower(outputPower);
}

void Regulator::regulate() {
  double temperature = getTemperature();

  double pidResult = calculatePid(temperature);
   
  setOutputPower(pidResult);
}


