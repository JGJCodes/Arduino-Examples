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

void setup(){
  Serial.begin(9600);
  puenteH.setMotor1(ENA, IN1, IN2);
  puenteH.setMotor2(ENB, IN3, IN4);
  puenteH.initMotors();
  servo.attach(8);  
}

void loop (){
  servo.write(95);  //Movemos el servomotor a una posici?n intermedia para que siempre inicie viendo al frente  
  /*El robot avanza hacia adelante*/
  puenteH.goForward(200);
  Serial.println(ultrasonic.Ranging(CM));
  delay(200);
  distancia=ultrasonic.Ranging(CM);  
  if (distancia <=10) //Comparaci?n de distancia, menor o igual a 10 cm{
    puenteH.stop();
    delay(500);
    Serial.print(ultrasonic.Ranging(CM));
    servo.write(8);  // Llevamos el servomotor a la derecha
    delay(500);
    distancia_der=ultrasonic.Ranging(CM);  // Se mide y guarda la distancia a la derecha
    delay(1000);
    Serial.print("distancia a la derecha: ");
    Serial.println(distancia_der);
    servo.write(180);  //Llevamos el servomotor a la izquierda
    delay(500);
    distancia_izq=ultrasonic.Ranging(CM);  // See mide y guarda la distancia a la izquierda
    delay(1000);
    Serial.print("distancia a la izquierda: ");
    Serial.println(distancia_izq);
    delay(1500);    
    // Comparaci?n entre la distancia de la izquierda y la derecha
    if(distancia_der > distancia_izq){
      puenteH.turnRigth(200);
    }
    else if (distancia_izq > distancia_der){
      puenteH.turnLeft(200);
    }
    delay(1000);    
    //Reseteo de las variables que se comparan
    distancia_izq=0;
    distancia_der=0;
  }
  else{
    puenteH.goForward(200);
  }  
}
