#include "MockTemperatureSensor.h"

MockTemperatureSensor::MockTemperatureSensor() {
  currentTemperature = 20;
}

int MockTemperatureSensor::getTemperature(void) {
  currentTemperature += 5;
  return currentTemperature;
}

