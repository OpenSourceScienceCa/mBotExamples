

#include "MeOrion.h"
MeRGBLed led(PORT_3);

void setup()
{
}

void loop()
{
  // Turn on only blue
  uint8_t red = 0;
  uint8_t green = 0;
  uint8_t blue = 100;

  // Set LED 0 and LED 1 to the values
  led.setColorAt(0, red, green, blue);
  led.setColorAt(1, red, green, blue);

  // Update the LED, so that the colours show
  led.show();

  // Wait half a second, so we can see the LED's turn on
  delay(500);

  // Set the LED's to be yellow (50% red, 50% green)
  red = 50;
  green = 50;
  blue = 0;

  // Set LED 0 and LED 1 to the values
  led.setColorAt(0, red, green, blue);
  led.setColorAt(1, red, green, blue);

  // Update the LED, so that the colours show
  led.show();

  // Wait half a second, so we can see the LED's turn on
  delay(500);

  // Set the LED's to be off
  red = 0;
  green = 0;
  blue = 0;

  // Set LED 0 and LED 1 to the values
  led.setColorAt(0, red, green, blue);
  led.setColorAt(1, red, green, blue);

  // Update the LED, so that the colours show
  led.show();

  // Wait half a second, so we can see the LED's turn off
  delay(500);
}
