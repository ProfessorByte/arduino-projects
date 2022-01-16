int leds[] = {2, 3, 4, 5};
char c;

// declaracion de funciones
void encendido(int led);
void apagado(int led);

void setup(){
  Serial.begin(9600);
  for(int i = 0; i < 4; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop(){
  while (Serial.available()){
    if(Serial.available() > 0){
      c = Serial.read();
    }
  }
  switch (c){
    case 'a':
    encendido(leds[0]);
    break;
    case 'b':
    encendido(leds[1]);
    break;
    case 'c':
    encendido(leds[2]);
    break;
    case 'd':
    encendido(leds[3]);
    break;
    case 'e':
    apagado(leds[0]);
    break;
    case 'f':
    apagado(leds[1]);
    break;
    case 'g':
    apagado(leds[2]);
    break;
    case 'h':
    apagado(leds[3]);
    break;
    case 'r':
    encendido(leds[random(4)]);
    delay(1);
    break;
    case 'p':
    encendido(leds[random(4)]);
    break;
    case 'o':
    apagado(leds[random(4)]);
    break;
  }
}

void encendido(int led){
  digitalWrite(led, HIGH);
}

void apagado(int led){
  digitalWrite(led, LOW);
}
