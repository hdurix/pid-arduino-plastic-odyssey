
#include "Regulator.h"

Regulator regulator(9, 300.0, 1.0, 0.5, 0.0);

void setup() {
  Serial.begin(9600);
  
  while (!Serial) delay(1);
  
  Serial.println("Regulation initialization");
}

void loop() {
  Serial.println("Starting loop");

  double temperature = getTemperature();

  double pidResult = calculatePid(temperature);
   
  setOutputPower(pidResult);

  delay(1000);
}

double getTemperature(void) {
  double temperature = regulator.getTemperature();
  
  Serial.print("Current temperature is: ");
  Serial.println(temperature);

  return temperature;
}

double calculatePid(double temperature) {
  double pidResult = regulator.calculate(temperature);

  Serial.print("PID result:");
  Serial.println(pidResult);

  return pidResult;
}

void setOutputPower(int outputPower) {
  Serial.print("Set output power to: ");
  Serial.println(outputPower);

  regulator.setOutputPower(outputPower > 255 ? 255 : outputPower);
}


