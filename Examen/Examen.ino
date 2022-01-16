#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,8,9,10,11);

int s1 = 2;
int s2 = 3;
int s3 = 4;
int s4 = 5;

int motor1 = 12;
int motor2 = 13;

int a;
int b;
int c;
int d;

void setup() {
  lcd.begin(16, 2);
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop() {
  lcd.setCursor(0,0);
  a = digitalRead(s1);
  b = digitalRead(s2);
  c = digitalRead(s3);
  d = digitalRead(s4);

  if(a){
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
  }else if(b){
    lcd.print("Puerta abierta");
  }else if((c && d && !a) || (c && d && b)){
    digitalWrite(motor2, HIGH);
    digitalWrite(motor1, LOW);
  }else{
    digitalWrite(motor1, LOW);
    digitalWrite(motor2, LOW);
  }
}
