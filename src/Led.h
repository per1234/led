#ifndef Led_h
#define Led_h

#include "Arduino.h"

class Led {
	public:
		Led(uint8_t pin);
		void blink(void);
		void on(void);
		void off(void);
	private:
		uint8_t _pin;
};

#endif