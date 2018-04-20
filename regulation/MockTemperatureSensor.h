#ifndef _MOCK_TEMPERATURE_SENSOR_H
#define _MOCK_TEMPERATURE_SENSOR_H

class MockTemperatureSensor {
 public:
  MockTemperatureSensor();

  double getTemperature(void);

private:
  double currentTemperature;
};

#endif
