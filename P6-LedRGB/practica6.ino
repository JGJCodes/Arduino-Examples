/*---------------------------------------------LED RGB - Tabla de Colores---------------------------------------------
Programa que hace uso de una función llamada
color para generar diversas tonalidades en
un LED RGB 
Cosas de Mecatrónica y Tienda de Robótica
*/

//--------------------------------------------------
//Declara puertos de entradas y salidas y variables
//--------------------------------------------------

int ledRojo = 9; //Declara Pin LED Rojo
int ledVerde=10; //Declara Pin LED Verde
int ledAzul=11; //Declara Pin LED Azul

//------------------------------------
//Funcion principal
//------------------------------------

void setup() // Se ejecuta cada vez que el Arduino se inicia
{
  pinMode(ledRojo,OUTPUT); //El LED Rojo como una salida
  pinMode(ledVerde,OUTPUT); //El LED Verde como una salida
  pinMode(ledAzul,OUTPUT); //El LED Azul como una salida
}

//------------------------------------
//Funcion ciclicla
//------------------------------------

void loop() // Esta funcion se mantiene ejecutando
{
  // cuando este energizado el Arduino
  //Llamado a la función Color que recibe
  //1er posicion: Intensidad Rojo
  //2da posición: Intensidad Verde
  //3ra posición: Intensidad Azul

  color(255,0,0);
  delay(1000); //Rojo

  color(0,255,0);
  delay(1000); //Verde

  color(0,0,255);
  delay(1000); //Azul

  color(255,255,255); //Blanco
  delay(1000);

  color(255,0,255);//Magenta
  delay(1000);

  color(255,128,0);//Naranja
  delay(1000);
}

//------------------------------------
//Funcion color
//------------------------------------

void color(int rojo, int verde, int azul){
  //Escritura de PWM del color Rojo
  analogWrite(ledRojo, 255-rojo);
  
  //Escritura de PWM del color Verde
  analogWrite(ledVerde, 255-verde);
  
  //Escritura de PWM del color Azul
  analogWrite(ledAzul, 255-azul);
}
//Fin programa