#include "Arduino.h"
#include "Led.h"

Led::Led(uint8_t pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Led::blink(void) {
	digitalWrite(_pin, HIGH);
	delay(250);
	digitalWrite(_pin, LOW);
	delay(250);
	digitalWrite(_pin, HIGH);
	delay(250);
	digitalWrite(_pin, LOW);
	delay(250);
}

void Led::on(void) {
	digitalWrite(_pin, HIGH);
}

void Led::off(void) {
	digitalWrite(_pin, LOW);
}