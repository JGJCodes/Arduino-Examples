
int pinLed1 = 9; //llamamos pinLed1 al pin 9 
int pinLed2 = 10; //llamamos pinLed1 al pin 10 
int pinLed3 = 11; //llamamos pinLed1 al pin 11 
//Funcion de configuración de Arduino 

void setup() 
{   pinMode(pinLed1, OUTPUT); //Configuramos pinLed1 como salida 
  pinMode(pinLed2, OUTPUT); //Configuramos pinLed2 como salida 
  pinMode(pinLed3, OUTPUT); //Configuramos pinLed3 como salida 
} 

//Función bucle de Arduino. Corazon del programa 
void loop() 
{  
  digitalWrite(pinLed1, HIGH); //Activamos pinLed. Enciende el LED delay(500); //Esperamos un segundo (1000ms)
  digitalWrite(pinLed1, LOW); //Desactivamos pinLed. Apaga el LED delay(500); //Esperamos un segundo 
  digitalWrite(pinLed2, HIGH); //Activamos pinLed. Enciende el LED 
  delay(500); //Esperamos un segundo (1000ms) 
  digitalWrite(pinLed2, LOW); //Desactivamos pinLed. Apaga el LED delay(500); //Esperamos un segundo 
  digitalWrite(pinLed3, HIGH); //Activamos pinLed. Enciende el LED delay(500); //Esperamos un segundo (1000ms) 
  digitalWrite(pinLed3, LOW); //Desactivamos pinLed. Apaga el LED delay(500); //Esperamos un segundo 
}