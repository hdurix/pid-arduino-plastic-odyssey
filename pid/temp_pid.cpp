#include "pid.h"
#include <stdio.h>

double getCurrentTemp() {
   return 20;
}

int main() {

    PID pid = PID(0.1, 100, -100, 0.1, 0.01, 0.5);

    for (int i = 0; i < 100; i++) {
	double temp = getCurrentTemp();
        double inc = pid.calculate(200, temp);
        printf("temp:% 7.3f inc:% 7.3f\n", temp, inc);
        //wait
        //delay(1000);
    }

    return 0;
}
