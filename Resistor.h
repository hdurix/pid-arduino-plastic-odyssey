#ifndef __RESISTOR_H
#define __RESISTOR_H

#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

class Resistor {
 public:
  Resistor(int pin);

  void setOutputPower(int outputPower);

private:
  int outputPin;
};

#endif
