char mensaje[] = "Hola Como  stas";

void setup(){
  Serial.begin(9600);
  Serial.println(mensaje);
  mensaje[10] = 'E';
  Serial.println(mensaje);
}

void loop(){}
