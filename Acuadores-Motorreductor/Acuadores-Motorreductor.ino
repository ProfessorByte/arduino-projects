int m1 = 2;
int m2 = 3;

void setup(){
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);  
}

void loop(){
  digitalWrite(m1,HIGH);
  digitalWrite(m2, LOW);
  delay(10000);
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  delay(5000);  
}
