#include <LiquidCrystal.h>

bool error = 0;
bool fH = 0;
bool lI = 0;
bool im = 0;
bool fT = 0;
bool at = 0;

bool s1 = 0;
bool s2 = 0;
bool s3 = 0;
bool imp = 0;

String mensaje;
int ledRojo = 2;
int ledVerde = 3;
int pulsador1 = 5;
int pulsador2 = 6;
int pulsador3 = 7;
int pulsador4 = 8;

LiquidCrystal lcd(9, 10, 11, 12, 13, 4);

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
  pinMode(pulsador3, INPUT);
  pinMode(pulsador4, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  s1 = digitalRead(pulsador1);
  s2 = digitalRead(pulsador2);
  s3 = digitalRead(pulsador3);
  imp = digitalRead(pulsador4);

  error = (!s1 && s3 && !imp) || (!imp && !s1 && s2) || (s3 && imp && s1 && s2);
  fH = imp && !s1;
  lI = s1 && !s2 && !s3 && !imp;
  im = s1 && !s2 && !s3 && imp;
  fT = (s1 && !s2 && s3) || (s3 && !imp && s1);
  at = s1 && s2 && !s3;

  ledRojo = (!s1 && s3 && !imp) || (!imp && !s1 && s2) || (s3 && imp && s1 && s2);
  ledVerde = s1 && !s2 && !s3 && imp;

  if(!s1 && !s2 && !s3 && !imp){
    mensaje = "Apagado";
  }else if(fH){
    mensaje = "Falta Hoja";
  }else if(error){
    mensaje = "ERROR";
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
  }else if(lI){
    mensaje = "Listo para Imprimir";
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
  }else if(im){
    mensaje = "Imprimiendo";
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, HIGH);
  }else if(fT){
    mensaje = "Falta Tinta";
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
  }else if(at){
    mensaje = "Atascado";
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
  }
  lcd.print(mensaje);
}
