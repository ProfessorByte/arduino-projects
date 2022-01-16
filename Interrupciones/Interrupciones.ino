const byte ledPin = 13;
const byte interrupcionPin = 2;

volatile byte estado = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interrupcionPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interrupcionPin), blink, CHANGE);
}

void loop() {
  digitalWrite(ledPin, estado);
}

void blink() {
  estado = !estado; 
}
