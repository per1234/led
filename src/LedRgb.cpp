#include "Arduino.h"
#include "LedRgb.h"

LedRgb::LedRgb(uint8_t redPin, uint8_t greenPin, uint8_t bluePin) {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  _redPin = redPin;
  _greenPin = greenPin;
  _bluePin = bluePin;
}

void LedRgb::color(uint8_t red, uint8_t green, uint8_t blue) {
	analogWrite(_redPin, red);
    analogWrite(_greenPin, green);
    analogWrite(_bluePin, blue);
}