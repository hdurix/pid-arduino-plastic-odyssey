
#include "MockResistor.h"
#include "MockTemperatureSensor.h"

MockResistor mockResistor;
MockTemperatureSensor mockTemperatureSensor;

void setup() {
  Serial.begin(9600);
  
  while (!Serial) delay(1); // wait for Serial on Leonardo/Zero, etc
  
  Serial.println("Regulation initialization");

  mockResistor.disableLight();
}

void loop() {
  Serial.println("Starting loop");

  int temperature = mockTemperatureSensor.getTemperature();
  
  Serial.print("Current temperature is: ");
  Serial.println(temperature);

  mockResistor.setBrightness(temperature > 255 ? 255 : temperature);

  delay(1000);
}

void testBright() {
  mockResistor.enableLight();
  delay(3000);
  mockResistor.setBrightness(0);
  delay(3000);
  mockResistor.setBrightness(1);
  delay(3000);
  mockResistor.setBrightness(129);
  delay(3000);
  mockResistor.setBrightness(255);
  delay(3000);
  mockResistor.disableLight();
  delay(3000);
}

