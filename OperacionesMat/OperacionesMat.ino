int led1 = 2;
int led2 = 3;

void suma();
void resta();
void multiplicacion();

int a = 3
int b = 5
int c;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){
  
  if(c == 8){
    digitalWrite(led1, HIGH);
  }
  if(c == -2){
    digitalWrite>(led2, HIGH);
  }
  if(c == 15){
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
  }
}

void suma(){
  c = a + b;
}

void resta(){
  c = a - b;
}

void multiplicacion(){
  c = a * b;
}
