

#include "Ultrasonic.h"     //Libreria del sonar
Ultrasonic ultrasonic(6,7); //Trigger, Echo

// Señal acustica
#include "pitches.h"        //Libreria que contiene las notas musicales
int sonido = NOTE_E5;       //Declaramos la nota musical elegida como el sonido

int sonar;                  //Declaramos la variable sonar

void setup()
{
   //Serial.begin(9600);    //Inicio de la comunicacion serie a 9600 baudios
}

void loop()
{
   
   sonar = ultrasonic.Ranging(CM); //Leemos la distancia del sonar  
                                   
                                   //La funcion ultrasonic.ranging(cm) viene declarada en la libreria del sonar
                                   //Calcula la distancia a la que rebota una señal enviada basandose en el 
                                   //tiempo que tarda en recorrer dicha distancia, devolviendonos la distancia
                                   //en centimetros, lista para utilizar en casos de medicion por ultrasonidos.
                                    
   while (sonar < 60)             //Mientras que la distancia sea menor a 60 cm
   {   
       noTone(8);                  //Mantenemos el sonido apagado
       
       delay(sonar*10);            //Delay dependiente del valor del sonar. Si la distancia se reduce
                                   //el delay es menor y la señal acustica sonara con mayor frecuencia.
                                   //Si la distancia aumenta, el delay aumenta, disminuyendo la frecuencia
                                   //con la que suenan los pitidos.
       
       tone(8, sonido);            //Señal acustica de aviso 
       
       delay(100);                 //Delay para mantener la señal acustica 0,1 segundos minimo
       
       noTone(8);                  //Apagamos el sonido
    
       while (sonar < 10)          //Si la distancia del sonar es menor que 10 cm
       {
         tone(8, sonido);                //Suena sin interrupciones indicando la proximidad del objeto
         sonar = ultrasonic.Ranging(CM); //Distancia del sonar  
       }  
       
       sonar = ultrasonic.Ranging(CM); //Leemos la distancia del sonar para volver a empezar
   }
  
}
