int lectura;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  while(!Serial){
    ;
  }
}

void loop(){
  String funciones = String(analogRead(0), DEC);
  Serial.println(funciones);
  if(String(20)>=funciones && String(10)<=funciones){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }
  //while(true);
}
