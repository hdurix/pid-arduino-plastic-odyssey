#ifndef _REGULATOR_H
#define _REGULATOR_H

#include "MockResistor.h"
#include "MockTemperatureSensor.h"
#include "PidCalculator.h"

class Regulator {
 public:
  Regulator(int pin, double sp, double kp, double ki, double kd);
  
  void setOutputPower(int);
  double getTemperature(void);
  double calculate(double pv);
  
private:
  MockResistor *resistor;
  MockTemperatureSensor *temperatureSensor;
  PidCalculator *pidCalculator;
};

#endif
