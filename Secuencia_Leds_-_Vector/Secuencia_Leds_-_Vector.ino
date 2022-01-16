int pines[] = {2, 3, 4, 5, 6, 7};
int contador = 0;
int tiempo = 100;

void setup(){
  for(contador=0; contador<6; contador++){
    pinMode(pines[contador], OUTPUT);
  }
}

void loop(){
  for(contador=0; contador<6; contador++){
    digitalWrite(pines[contador], HIGH);
    delay(tiempo);
    digitalWrite(pines[contador], LOW);
    delay(tiempo);
  }
  for(contador=5; contador>=0; contador--){
    digitalWrite(pines[contador], HIGH);
    delay(tiempo);
    digitalWrite(pines[contador], LOW);
    delay(tiempo);
  }
}
