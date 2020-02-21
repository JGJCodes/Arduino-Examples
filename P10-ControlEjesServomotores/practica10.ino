#include <Servo.h> 

//Control de dos servomoteres con un joystick 
const int servo1=3; //Primer Servo
const int servo2=10; //Segundo Servo
const int ejeX=0; //eje X del servo
const int ejeY=1; //eje Y del servo
int servoVal; //variable para leer el valor del pin analogico
Servo Miservo1; //objeto de la librería servo para controlar el servo1
Servo Miservo2; //objeto de la librería servo para controlar el servo2

void setup() { 
  //Definimos en que pines tenemos conectados los servos
  Miservo1.attach(servo1); 
  Miservo2.attach(servo2); 
  Serial.begin(9600); //inicializamos la conexión serial
} 


void loop() { 
  //Mostramos las lecturas del joystick en la consola
  Serial.print("EjeX: "); 
  Serial.print(analogRead(ejeX)); 
  Serial.print("EjeY: "); 
  Serial.print(analogRead(ejeY)); 

  //Leemos la posicion del joystick en X
  servoVal=analogRead(ejeX); 
//Convertimos el valor leido en un valor dentro del rango de movimiento del servo
  servoVal=map(servoVal,0,1023,0,180); 
  Miservo1.write(servoVal); //movemos el servo a la posicion correspondiente

  //Repetimos las mismas operaciones para el eje Y
  servoVal=analogRead(ejeY); 
  servoVal=map(servoVal,0,1023,0,180); 
  Miservo2.write(servoVal); 
  
  //Damos tiempo a que los servos se coloquen antes de leer de nuevo
  delay(15); 
}