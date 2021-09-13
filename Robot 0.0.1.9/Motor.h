#include <Arduino.h>
#include "CustomServo.h"
#define POZITIVNO 1
#define NEGATIVNO 0

class Motor
{
public:
	Motor();
  Motor(bool smer);
	void setPin(int pin);
	void setKot(int kot);
	int getKot();
	int getPot();
	int getPin();
	void operator++(int i);
	void operator--(int i);
	void setSpeed(int hitrost);

private:
	int kot;
	int pin;
	int hitrost;
	bool smer;
	CustomServo motor;
};
