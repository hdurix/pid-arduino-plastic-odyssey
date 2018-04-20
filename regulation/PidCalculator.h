#include "PID_v1.h"

class PidCalculator {
 public:
  PidCalculator(double setpoint);

  double calculate(double pv);
  
 private:
  int setpoint;
  PID *pid;
};
