
class MockTemperatureSensor {
 public:
  MockTemperatureSensor();

  double getTemperature(void);

private:
  double currentTemperature;
};
