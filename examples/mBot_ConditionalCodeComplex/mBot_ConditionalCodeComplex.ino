
 
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
  
   // If the value we read is 1023, the potentiometer is all the way to the right
   if (analogValue == 1023)
   {
      Serial.print("Maxed out!\n");

      // Make both LEDs red, at 100% intensity
      led.setColorAt(0, 100, 0, 0);
      led.setColorAt(1, 100, 0, 0);
   }

   // Else if the value we read is less than or equal to 100, the potentiometer is pretty far to the left
   else if (analogValue <= 100)
   {
      if (analogValue == 0)
        Serial.print("Off.\n");
      else
        Serial.print("Almost off.\n");

      // Make the first LED green, at 100% intensity
      led.setColorAt(0, 0, 100, 0);

      // Make the second LED green, at an intensity equal to the value of the potentiometer
      led.setColorAt(1, 0, analogValue, 0);
   }

   /* Else
      Implicitly, if the analog value is not 1023, and is not less than or equal to 100
   */
   else
   {
      Serial.print("In the middle.\n");

      // Make the first LED blue, at 100% intensity
      led.setColorAt(0, 0, 0, 100);

      // Make the second LED blue, at an intensity created using a mathematical function
      // to range from 0 to 100.
      led.setColorAt(1, 0, 0, (analogValue - 100) * 100.0 / (1022 - 100));
   }

  // Show the colors that we just set for the LEDs
  led.show();

   // Delay for 100 ms, so that this does not output text too quickly
   delay(100);

  return;
}
