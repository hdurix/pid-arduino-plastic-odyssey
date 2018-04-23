
#include "Regulator.h"

#define NB_REGULATORS 3

Regulator regulators[NB_REGULATORS] = {
  Regulator(9, 100.0, 1.0, 0.5, 0.0),
  Regulator(10, 200.0, 1.0, 0.5, 0.0),
  Regulator(11, 300.0, 1.0, 0.5, 0.0)
};

void setup() {
  Serial.begin(9600);
  
  while (!Serial) delay(1);
  
  Serial.println("Regulation initialization");
}

void loop() {
  Serial.println("Starting loop");

  for (int i = 0; i < NB_REGULATORS; i++) {
    regulators[i].regulate();
  }

  delay(1000);
}

