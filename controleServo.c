#include "Servo.h"
 
Servo servo1; 
Servo servo2; 
 
void setup()
{
  
  servo1.attach(5); 
  servo2.attach(6);
}
 
void loop()
{
  int angle = analogRead(0); 
  angle=map(angle, 0, 1023, 0, 180);
  servo1.write(angle); 
  
  int angle2 = analogRead(1);
  angle2=map(angle2, 0, 1023, 0, 180);
  servo2.write(angle2);
  delay(15);
}
