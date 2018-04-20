#include "MockTemperatureSensor.h"

MockTemperatureSensor::MockTemperatureSensor() {
  currentTemperature = 20.0;
}

double MockTemperatureSensor::getTemperature(void) {
  currentTemperature += 5.0;
  return currentTemperature;
}

