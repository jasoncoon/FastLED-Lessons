#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 10

#define BRIGHTNESS 32

// What data pin on the board are they connected to?
#define DATA_PIN 17

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(32);
}

void loop() {
  // Turn the LEDs on, then pause
  fill_solid(leds, NUM_LEDS, CRGB::Red);
  FastLED.show();
  delay(500);
  // Now turn the LEDs off, then pause
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  FastLED.show();
  delay(500);

  // Turn the LEDs on, then pause
  fill_solid(leds, NUM_LEDS, CRGB::Green);
  FastLED.show();
  delay(500);
  // Now turn the LEDs off, then pause
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  FastLED.show();
  delay(500);

  // Turn the LEDs on, then pause
  fill_solid(leds, NUM_LEDS, CRGB::Blue);
  FastLED.show();
  delay(500);
  // Now turn the LEDs off, then pause
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  FastLED.show();
  delay(500);
}
