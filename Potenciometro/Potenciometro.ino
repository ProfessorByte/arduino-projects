int led = 3;
int brillo;
int pot = 0;

void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  brillo = (int)(((float)(analogRead(pot)/1024.0))*255);
  analogWrite(led, brillo);
  Serial.println(brillo);
}
