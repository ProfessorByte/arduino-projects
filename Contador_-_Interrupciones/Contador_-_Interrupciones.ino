int contador = 0;
void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), ServicioBoton, FALLING);
}

void loop(){
  delay(200);
  digitalWrite(13, LOW);
}
void ServicioBoton(){
  contador++;
  Serial.println(contador);
  digitalWrite(13, HIGH);
}
