
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x27,20,2); 
// 09.- conversor analógico - digital
float valor;
int canal = A0;
int a = 0;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Tempetarura");
  lcd.setCursor(a,1);
  a++;
  valor = ((float)(analogRead(canal)/1023.0))*500;
  lcd.print(valor);
  lcd.print(" Grados C.");
  delay(300);
  lcd.clear();
  if(a==20){
    a = 0;
  }
}
