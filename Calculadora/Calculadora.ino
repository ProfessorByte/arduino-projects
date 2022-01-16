int leds[] = {2, 3, 4, 13};

void menu();
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

void setup(){
  Serial.begin(9600);
  for(int i = 0; i < 4; i++){
    pinMode(leds[i], OUTPUT);
  }
  menu();
}
void loop(){
  char opcion;
  int a, b, c;
  
  while(true){
    if(Serial.available()){
      opcion = Serial.read();
      break;
    }
  }
  Serial.println("Inserte los numeros a operar:");
  while(!Serial.available()){
    a = Serial.parseInt();
  }
  delay(5000);
  b = Serial.parseInt();
  switch(opcion){
    case '1':
      c = suma(a, b);
      if(c > 15){
        digitalWrite(leds[0], HIGH);
      }
      break;
    case '2':
      c = resta(a, b);
      if(c < 15){
        digitalWrite(leds[1], HIGH);
      }
      break;
    case '3':
      c = multiplicacion(a, b);
      if(c == 15){
        digitalWrite(leds[2], HIGH);
      }
      break;
    case '4':
      c = division(a, b);
      if(c != 15){
        digitalWrite(leds[3], HIGH);
      }
      break;
  }
  Serial.println(c);
  exit(0);
}

void menu(){
  Serial.println("------CALCULADORA-------");
  Serial.println("1. Suma");
  Serial.println("2. Resta");
  Serial.println("3. Multiplicacion");
  Serial.println("4. Division");
  Serial.println("Seleccione su opción: ");
}

int suma(int a, int b){
  return a + b;
}

int resta(int a, int b){
  return a - b;
}

int multiplicacion(int a, int b){
  return a * b;
}

int division(int a, int b){
  int res;
  if(b != 0){
    res = a/b;
  }else{
    res = 9999999;
  }
  return res;
}
