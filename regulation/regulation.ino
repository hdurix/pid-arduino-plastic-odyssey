
#include "MockResistor.h"

MockResistor mockResistor;

void setup() {
  Serial.begin(9600);
  
  while (!Serial) delay(1); // wait for Serial on Leonardo/Zero, etc
  
  Serial.println("Regulation initialization");

}

void loop() {
  Serial.println("Starting loop");
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
