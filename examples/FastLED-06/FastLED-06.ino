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

  // loop through all of the LEDs
  for (int i = 0; i < NUM_LEDS; i = i + 1) {
    // calculate the color for the current LED
    byte offset = i * (255 / NUM_LEDS);
    
    // create a color
    CRGB color = CHSV(hue + offset, 255, 255);

    // set the color of the current LED
    leds[i] = color;
  }

  FastLED.show();
}
