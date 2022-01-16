const int trigger = 12;
const int echo = 13;

void setup(){
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop(){
  long tiempo, distancia;
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = (tiempo/2)/29;
  Serial.print(distancia);
  Serial.println(" cm");
  delay(500);
  if(distancia<11){
    digitalWrite(11, HIGH);  
  }else{
    digitalWrite(11, LOW);  
  }
}
