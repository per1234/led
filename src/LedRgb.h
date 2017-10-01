#ifndef LedRgb_h
#define LedRgb_h

#include "Arduino.h"

class LedRgb {
	public:
		LedRgb(uint8_t redPin, uint8_t greenPin, uint8_t bluePin);
		void color(uint8_t red, uint8_t green, uint8_t blue);
	private:
		uint8_t _redPin, _greenPin, _bluePin;
};

#endif