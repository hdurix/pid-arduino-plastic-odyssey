
#include "Regulator.h"

Regulator regulator1(9, 100.0, 1.0, 0.5, 0.0);
Regulator regulator2(10, 200.0, 1.0, 0.5, 0.0);
Regulator regulator3(11, 300.0, 1.0, 0.5, 0.0);

void setup() {
  Serial.begin(9600);
  
  while (!Serial) delay(1);
  
  Serial.println("Regulation initialization");
}

void loop() {
  Serial.println("Starting loop");

  regulator1.regulate();
  regulator2.regulate();
  regulator3.regulate();

  delay(1000);
}

