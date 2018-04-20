
class MockTemperatureSensor {
 public:
  MockTemperatureSensor();

  int getTemperature(void);

private:
  int currentTemperature;
};
