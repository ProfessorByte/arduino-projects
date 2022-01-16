int i;
int semaforo[2][3] = {{13, 12, 11}, {3000, 2000, 5000}};

void setup() {
  for(i = 0; i<3; i++){
    pinMode(semaforo[0][i], OUTPUT);
  }
}

void loop() {
  for(i = 0; i<3; i++){
    digitalWrite(semaforo[0][i], HIGH);
    delay(semaforo[1][i]);
    digitalWrite(semaforo[0][i], LOW);
  }
}
