#include "Motor.h"

Motor::Motor(bool smer) {
	kot = 90;
	hitrost = 10;
	pin = 3;
	this->smer = smer;
}

void Motor::setPin(int pin) {
	this->pin = pin;

	motor.attach(pin);
}

void Motor::setKot(int kot) {
	if (kot > 180 && kot < 0)
		return;

	if (this->kot < kot)
		for (; this->kot <= kot; this->kot = this->kot + 1)
			{
        motor.write(this->kot);
        delay(hitrost);
      }
	else
		for (;this->kot >= kot; this->kot = this->kot - 1)
			{
			  motor.write(this->kot);
       delay(hitrost);
			}
}

void Motor::setSpeed(int hitrost) {
	this->hitrost = hitrost;
}

int Motor::getKot() {
	return kot;
}

int Motor::getPin() {
	return pin;
}

int Motor::getPot() {
	//To bo dodano enkrat ko bos lahko bral iz potenciometra na servo motorju
}

void Motor::operator++(int i) {
	
	if (smer)
	{
		if (kot < 180)
			kot = kot + 1;
	}
	else {
		if (kot > 0)
			kot = kot - 1;
	}

	motor.write(kot);
}

void Motor::operator--(int i) {
	if (smer)
	{
		if (kot > 0)
			kot = kot - 1;
	}
	else {
		if (kot < 180)
			kot = kot + 1;
	}

	motor.write(kot);

}
