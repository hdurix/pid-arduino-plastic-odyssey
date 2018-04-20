#include "MockTemperatureSensor.h"

MockTemperatureSensor::MockTemperatureSensor() {
  currentTemperature = 200.0;
}

double MockTemperatureSensor::getTemperature(void) {
  currentTemperature += 5.0;
  return currentTemperature;
}

