#include <Keypad.h>
#include <Servo.h>

Servo servo1;
int pinservo = A2;
int pulsomin = 1000;
int pulsomax = 2000;

char keys[4][4] = {
  {'1', '2','3','A'},
  {'4', '5','6','B'},
  {'7', '8','9','C'},
  {'*', '0','#','D'}
};

byte pinesFilas[4] = {9,8,7,6};
byte pinesColumnas[4] = {5,4,3,2};

Keypad teclado = Keypad(makeKeymap(keys), pinesFilas, pinesColumnas, 4, 4);

char tecla;

char clave[7];
char claveMaestra[7] = "123456";

byte indice = 0;

void setup(){
  Serial.begin(9600);
  servo1.attach(pinservo, pulsomin, pulsomax);
}

void loop(){
  tecla = teclado.getKey();
  if(tecla){
    clave[indice] = tecla;
    indice++;
    Serial.print(tecla);
  }
  if(indice==6){
    if(!strcmp(clave, claveMaestra)){
      Serial.print("\nCorrecta");
      servo1.write(0);
      delay(1000);
      servo1.write(180);
      delay(1000);
    }else{
      Serial.print("\nIncorrecta");
      indice = 0;
    }
  }
}
