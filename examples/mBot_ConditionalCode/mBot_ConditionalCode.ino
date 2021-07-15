
 
#include "MeOrion.h"

// This is the "led" object, that is connected to PORT_3 of the mBot.
// This "led" object allows us to control the two onboard RGB LED's.
MeRGBLed led(PORT_3);

void setup()
{
   // Start communicating on the serial port at 9600 baud
   Serial.begin(9600);
}

void loop()
{
   // Read from the analog port
   int analogValue = analogRead(A0);

   // Output the value over the serial port
   Serial.print("The analog value is ");
   Serial.print(analogValue);
   Serial.print(" out of 1023.\n");     // \n is a newline character
  
   // If the value we read is less than 512, we are in the left half
   if (analogValue < 512)
   {
      Serial.print("Left side\n");

      // Make LED 0 red, at 100% intensity
      led.setColorAt(0, 100, 0, 0);

      // Make LED 1 green, at 100% intensity
      led.setColorAt(1, 0, 100, 0);
   }

   // Else, the value is 512 or more
   else
   {
      Serial.print("Right side\n");

      // Make both LED's blue, at 100% intensity
      led.setColorAt(0, 0, 0, 100);
      led.setColorAt(1, 0, 0, 100);
   }

  // Show the colors that we just set for the LEDs
  led.show();

  return;
}
