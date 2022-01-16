#include <Keypad.h>
#include <LiquidCrystal.h>

int pinMotor = 5;
char tecla1 = 'l';
char tecla2 = 'i';
char tecla3 = 'y';
char tecla;

char keys[5][5] = {
  {'a', 'b','c','d','e'},
  {'f', 'g','h','i','j'},
  {'k', 'l','m','n','o'},
  {'p', 'q','r','s','t'},
  {'u', 'v','w','x','y'}
};

byte pinesFilas[5] = {14,15,16,17,18};
byte pinesColumnas[5] = {2,3,4,12,13};

Keypad teclado = Keypad(makeKeymap(keys), pinesFilas, pinesColumnas, 5, 5);
LiquidCrystal lcd(6,7,8,9,10,11);

void setup(){
  pinMode(pinMotor, OUTPUT);
}

void loop(){
  tecla = teclado.getKey();
  if(tecla == tecla1){
    digitalWrite(pinMotor, HIGH);
    delay(10000);
    digitalWrite(pinMotor, LOW);
  }else if(tecla == tecla2){
    lcd.setCursor(0,0);
    lcd.print("Examen Arduino");
    for (int i =0; i<=16; i++){
      lcd.scrollDisplayRight();
      delay(300);
    }
  }else if(tecla == tecla3){
    lcd.setCursor(0,0);
    lcd.print("Examen Arduino");
    digitalWrite(pinMotor, HIGH);
    delay(5000);
    digitalWrite(pinMotor, LOW);
  }
}
