

#include "MeOrion.h"

// The two motor objects
MeDCMotor motor1(M1);
MeDCMotor motor2(M2);

uint8_t motorSpeed = 100;

void setup()
{
}

void loop()
{
  // Run both motors forwards at the same speed
  motor1.run(motorSpeed);
  motor2.run(motorSpeed);

  // Wait 1 second
  delay(1000);

  // Stop both motors
  motor1.stop();
  motor2.stop();

  // Wait 100 milliseconds
  delay(100);
 
  // Run both motors backwards at the same speed
  motor1.run(-motorSpeed);
  motor2.run(-motorSpeed);

  // Wait 1 second
  delay(1000);

  // Stop both motors
  motor1.stop();
  motor2.stop();

  // Wait 100 milliseconds
  delay(100);  
}
