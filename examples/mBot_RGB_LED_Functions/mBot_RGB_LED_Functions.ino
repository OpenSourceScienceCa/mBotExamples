

#include "MeOrion.h"

MeRGBLed led(PORT_3);

// Forward declaration of the SetLedsAndWait() function
void SetLedsAndWait(uint8_t red, uint8_t green, uint8_t blue, uint16_t delayMs);

void setup()
{
}

void loop()
{
  // Set the LED's to be 100% blue, then wait for half a second (500 milliseconds)
  SetLedsAndWait(0, 0, 100, 500);

  // Set the LED's to be yellow (50% red, 50% green), then wait for half a second (500 milliseconds)
  SetLedsAndWait(50, 50, 0, 500);

  // Set the LED's to be off, then wait for a quarter of a second (250 milliseconds)
  SetLedsAndWait(0, 0, 0, 250);
}


void SetLedsAndWait(uint8_t red, uint8_t green, uint8_t blue, uint16_t delayMs)
{
  // Set LED 0 and LED 1 to the values
  led.setColorAt(0, red, green, blue);
  led.setColorAt(1, red, green, blue);

  // Update the LED's, so that the new colours show
  led.show();

  // Wait for delayMs milliseconds
  delay(delayMs);
}
