
#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

class MockResistor {
 public:
  MockResistor();

  void enableLight(void);
  void disableLight(void);
  void setBrightness(int);

private:
  int ledLight;
};
