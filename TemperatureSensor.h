#ifndef __TEMPERATURE_SENSOR_H
#define __TEMPERATURE_SENSOR_H

class TemperatureSensor {
  public:
    TemperatureSensor();

    double getTemperature(void);

  private:
    double currentTemperature;
};

#endif
