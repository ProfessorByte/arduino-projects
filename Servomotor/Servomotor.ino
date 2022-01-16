#include <Servo.h>

Servo servo1;
int pinservo = 2;
int pulsomin = 1000;
int pulsomax = 2000;

void setup(){
  servo1.attach(pinservo, pulsomin, pulsomax);  
}

void loop(){
  servo1.write(0);
  delay(5000);
  servo1.write(180);
  delay(5000);
}
