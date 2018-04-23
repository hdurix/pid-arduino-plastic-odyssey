# Arduino

Arduino code for the Plastic Odyssey project. It can control how much output power
will be given to the output pin.

## Algorithm explanation

This code has to be run on Arduino.

At startup, several things are initialized:
- regulators with the given configuration
- PID controllers
- Serial output for printing logs

3 steps are done every second for every `Regulator`:
- Get the current temperature
- Calculate the next PID value depending on the current temperature and the PID history
- Release the calculated power through the output pin (between 0 and 255)

## Configuration

This program is still in a development state.
For now, all the configuration is defined directly in the code.

### Configure a regulator

For now, a regulator is configured directly in the Arduino code.
Here is an example:

> Regulator(9, 100.0, 1.0, 0.5, 0.0)

A regulator takes several arguments to configure pins and PID:

- Output resistor pin number (9)
- PID setpoint (100)
- PID Kp: proportional gain (1)
- PID Ki: integral gain (0.5)
- PID Kd: derivative gain (0)

### Add/Remove a regulator

2 things have to be done:
- Modify the variable `NB_REGULATORS` to be equals to the number of regulators
- Add/Remove a line of `Regulator(...)` with the wanted configuration

## TODO

- connect the `TemperatureSensor` to a real sensor
- add the configuration needed for the temperature pin to the `Regulator` class
- check with a real system and find the fine PID configuration