#include "PidCalculator.h"
#include "PID_v1.h"
 
PidCalculator::PidCalculator(double sp, double kp, double ki, double kd) {
  setpoint = sp;
  pid = new PID(&input, &output, &setpoint, kp, ki, kd, DIRECT);
  //turn the PID on
  pid->SetMode(AUTOMATIC);
}

double PidCalculator::calculate(double pv) {
  input = pv;
  pid->Compute();
  return output;
}




