
#include "MockResistor.h"
#include "MockTemperatureSensor.h"
#include "PidCalculator.h"

MockResistor resistor(9);
MockTemperatureSensor temperatureSensor;
PidCalculator pidCalculator(300.0, 1.0, 0.5, 0.0);

void setup() {
  Serial.begin(9600);
  
  while (!Serial) delay(1);
  
  Serial.println("Regulation initialization");

  initOutputPower();
}

void loop() {
  Serial.println("Starting loop");

  double temperature = getTemperature();

  double pidResult = calculatePid(temperature);
   
  setOutputPower(pidResult);

  delay(1000);
}

double getTemperature(void) {
  double temperature = temperatureSensor.getTemperature();
  
  Serial.print("Current temperature is: ");
  Serial.println(temperature);

  return temperature;
}

double calculatePid(double temperature) {
  double pidResult = pidCalculator.calculate(temperature);

  Serial.print("PID result:");
  Serial.println(pidResult);

  return pidResult;
}

void initOutputPower() {
  resistor.disableLight();
}

void setOutputPower(int outputPower) {
  Serial.print("Set output power to: ");
  Serial.println(outputPower);

  resistor.setBrightness(outputPower > 255 ? 255 : outputPower);
}

void testBright() {
  resistor.enableLight();
  delay(3000);
  resistor.setBrightness(0);
  delay(3000);
  resistor.setBrightness(1);
  delay(3000);
  resistor.setBrightness(129);
  delay(3000);
  resistor.setBrightness(255);
  delay(3000);
  resistor.disableLight();
  delay(3000);
}

