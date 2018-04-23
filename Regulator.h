#ifndef _REGULATOR_H
#define _REGULATOR_H

#include "Resistor.h"
#include "TemperatureSensor.h"
#include "PidCalculator.h"

class Regulator {
  public:
    Regulator(int pin, double sp, double kp, double ki, double kd);

    void regulate();
  
  private:
    Resistor *resistor;
    TemperatureSensor *temperatureSensor;
    PidCalculator *pidCalculator;
  
    void setOutputPower(int);
    double getTemperature(void);
    double calculatePid(double temperature);
};

#endif
