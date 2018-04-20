#ifndef _MOCK_RESISTOR_H
#define _MOCK_RESISTOR_H

#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

class MockResistor {
 public:
  MockResistor(int pin);

  void setOutputPower(int outputPower);

private:
  int outputPin;
};

#endif
