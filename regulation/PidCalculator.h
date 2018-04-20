#include "PID_v1.h"

class PidCalculator {
 public:
  PidCalculator(double sp, double kp, double ki, double kd);

  double calculate(double pv);
  
 private:
  double setpoint;
  double input;
  double output;
  PID *pid;
};
