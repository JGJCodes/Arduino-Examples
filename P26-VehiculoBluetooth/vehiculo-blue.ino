#include <Ultrasonic.h>  //Librer?a del sensor ultras?nico
#include <Servo.h>  //Librer?a de servo motor
#include <PuenteH.h> //Librer?a de shield puente H

////* Declaraci?n de variables y pines*///
const int ENA = 2; const int IN1 = 3; const int IN2 = 4;// Motor A
const int ENB = 7; const int IN3 = 6; const int IN4 = 5;// Motor B
PuenteH puenteH(PuenteH::L298);/// Instancia a clase PuenteH
int distancia=0, distancia_izq=0, distancia_der=0;  // Variables para guardar las distancias
Ultrasonic ultrasonic(10,9); // ( PIN de disparo, PIN de eco)
Servo servo;  //Declaraci?n de objetivo tipo Servo
int estado = 'g';         // inicia detenido

void setup(){
  Serial.begin(9600);
  puenteH.setMotor1(ENA, IN1, IN2);
  puenteH.setMotor2(ENB, IN3, IN4);
  puenteH.initMotors();
  servo.attach(8);  
}

void loop (){
  if(Serial.available()>0){        // lee el bluetooth y almacena en estado
      estado = Serial.read();
  }
  if(estado=='a'){           // Boton desplazar al Frente
   	 puenteH.goForward(200);
  }
  if(estado=='b'){          // Boton IZQ 
     puenteH.turnLeft(200);     
  }
  if(estado=='c'){         // Boton Parar
     puenteH.stop();
  }
  if(estado=='d'){          // Boton DER
     puenteH.turnRight(200);
  } 
  
  if(estado=='e'){          // Boton Reversa
     puenteH.goBackward(200);
  }
  if (estado =='f'){          // Boton ON se mueve sensando distancia 
  }
  if  (estado=='g'){          // Boton OFF, detiene los motores no hace nada 
  }  
}
