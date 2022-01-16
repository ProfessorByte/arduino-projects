#include <Servo.h>

Servo servo1;
int pinservo = 2;
int pulsomin = 1000;
int pulsomax = 2000;

int valorpot;
int angulo;
int pot = A0;

void setup(){
  servo1.attach(pinservo, pulsomin, pulsomax);
}

void loop(){
  valorpot = analogRead(pot);
  angulo = map(valorpot, 0, 1023, 0, 180);
  servo1.write(angulo);
  delay(20);
}
