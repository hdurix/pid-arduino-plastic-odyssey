#include "TemperatureSensor.h"

TemperatureSensor::TemperatureSensor() {
  currentTemperature = 20.0;
}

double TemperatureSensor::getTemperature(void) {

  // TODO: get temperature from real sensor
  currentTemperature += 25.0;
  return currentTemperature;
}

