int pulsadorA = 2;
int pulsadorB = 3;
int pulsadorC = 4;
int motor = 13;
int lampara = 12;

boolean a = 0;
boolean b = 0;
boolean c = 0;

void setup(){
    pinMode(pulsadorA, INPUT);
    pinMode(pulsadorB, INPUT);
    pinMode(pulsadorC, INPUT);
    pinMode(motor, OUTPUT);
    pinMode(lampara, OUTPUT);
}

void loop(){
  a = digitalRead(pulsadorA);
  b = digitalRead(pulsadorB);
  c = digitalRead(pulsadorC);
  
  digitalWrite(motor, (b&&c)||(a&&b)||(a&&c));
  digitalWrite(lampara, (a||b||c)&&(!a||!b||!c));
}
