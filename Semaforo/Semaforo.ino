int ledRojo = 13;
int ledAmarillo = 12;
int ledVerde = 11;
void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(3000);
  
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, HIGH);
  digitalWrite(ledVerde, HIGH);
  delay(2000);
  
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledAmarillo, HIGH);
  digitalWrite(ledVerde, HIGH);
  delay(4000);
}
