#include "PidCalculator.h"
#include "PID_v1.h"

//Define Variables we'll be connecting to
double input, output;

//Specify the links and initial tuning parameters
double Kp=0.1, Ki=0.5, Kd=0.01;
 
PidCalculator::PidCalculator(double setpoint) {
  pid = new PID(&input, &output, &setpoint, Kp, Ki, Kd, DIRECT);
  //turn the PID on
  pid->SetMode(AUTOMATIC);
  //pid = new PID(0.1, 100, -100, 0.1, 0.01, 0.5);
}

double PidCalculator::calculate(double pv) {
  input = pv;
  pid->Compute();
  return output;
}




