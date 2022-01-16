int led1 = 9;
int led2 = 10;
int led3 = 11;
int brillo;

void setup(){
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
}

void loop(){
    for(brillo=0;brillo<=255;brillo++){
        analogWrite(led1, brillo);
        analogWrite(led2, brillo);
        analogWrite(led3, brillo);
        delay(15);
    }

    for(brillo=255;brillo>=0;brillo--){
        analogWrite(led1, brillo);
        analogWrite(led2, brillo);
        analogWrite(led3, brillo);
        delay(15);
    }
}
