///
/// Ejemplo de control de Puente H
///
/// by RafaG
///
 
#include "PuenteH.h"
 
/// Definición de pines
///
 
// Motor A
const int ENA = 2; // Pin PWM
const int IN1 = 3;
const int IN2 = 4;
 
// Motor B
const int ENB = 7; // Pin PWM
const int IN3 = 6;
const int IN4 = 5;
///
/// Fin de definición de pines
 
/// Instancia a clase PuenteH
///
PuenteH puenteH(PuenteH::L298);
///
/// Fin de instancia a clase PuenteH
 
/// Funciones básicas
///
void setup() {
    Serial.begin(9600);
    Serial.println("Inicio de sistema:");
 
    puenteH.setMotor1(ENA, IN1, IN2);
    puenteH.setMotor2(ENB, IN3, IN4);
    puenteH.initMotors();
}
 
void loop() {
    puenteH.goForward(200);
    delay(1000);
    puenteH.goBackward(200);
    delay(1000);
    puenteH.turnLeft(200);
    delay(1000);
    puenteH.turnRight(200);
    delay(1000);
    puenteH.stop();
    delay(1000);
}
///
/// Fin funciones básicas