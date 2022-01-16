int valor;
int canal = A0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  valor = (int)(((float)(analogRead(canal)/1024.0))*5);
  Serial.println(valor);
}
