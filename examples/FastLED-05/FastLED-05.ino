#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 10

#define BRIGHTNESS 32

// What data pin on the board are they connected to?
#define DATA_PIN 17

// Define the array of leds
CRGB leds[NUM_LEDS];

byte hue = 0;

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(32);
}

void loop() {
  // slowly add 1 to the current hue
  EVERY_N_MILLISECONDS(30) {
    hue = hue + 1;
  }
  
  // create a color with the current hue
  CRGB color = CHSV(hue, 255, 255);

  // show the color on all of the LEDs
  fill_solid(leds, NUM_LEDS, color);
  FastLED.show();
}
