int pulsador1 = 2;
int pulsador2 = 3;
int salida = 13;

int a = 0;
int b = 0;
int z = 0;

void setup(){
  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
  pinMode(salida, OUTPUT);
}

void loop(){
  a = digitalRead(pulsador1);
  b = digitalRead(pulsador2);
  z = a&&b;
  digitalWrite(salida, z);
}
