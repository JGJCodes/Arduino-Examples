/*
---------------------------------------------
Contador de pulsos
---------------------------------------------
Programa que muestra por pantalla (consola serial) el número
de veces que el pulsador ha sido presionado, se realiza un
proceso que de acuerdo al número de pulsaciones se enciende
un LED,
Cosas de Mecatrónica y Tienda de Robótica
*/

//--------------------------------------------------
//Declara puertos de entradas y salidas y variables
//--------------------------------------------------
int conta = 0; //Variable para guardar el conteo de los pulsos
//------------------------------------
//Funcion principal
//------------------------------------

void setup() // Se ejecuta cada vez que el Arduino se inicia
{
  Serial.begin(9600);
  //Inicia comunicación serial
  pinMode(2,INPUT);
  //Configura el pin 2 como una entrada, pulsador
  pinMode(13,OUTPUT);
  //Configura el pin 13 como una salida, LED
}

//------------------------------------
//Funcion ciclicla
//------------------------------------
void loop() // Esta funcion se mantiene ejecutando
{
  // cuando este energizado el Arduino
  // Si el pulsador esta oprimido
  if ( digitalRead(2) == HIGH )
  {
    // Si el pulsador no esta oprimido, flanco de bajada
    if ( digitalRead(2) == LOW )
    {
      conta++;
      //Incrementa el contador
      Serial.println(conta); //Imprime el valor por consola
      delay (100);
      // Retardo
    }
  }
  // Si el valor del contador es 5
  if (conta==5)
  {
    digitalWrite(13,HIGH); //Enciende el LED
  }
  // Si el valor del contador es 8
  if (conta==8)
  {
    digitalWrite(13,LOW); // Apaga el LED
  }
 }

//Fin programa