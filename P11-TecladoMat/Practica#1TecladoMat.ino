#include <Keypad.h>

const byte Filas = 4; 		//Cuatro filas
const byte Cols = 4; 		//Cuatro columnas

byte Pins_Filas[] = {7, 6, 5, 4};	 //Pines Arduino a los que contamos las filas.
byte Pins_Cols[] = { 11, 10, 9, 8}; 	// Pines Arduino a los que contamos las columnas.
char Teclas [ Filas ][ Cols ] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

void setup()
{	  Serial.begin(9600) ; }
  
void loop()
{	  char pulsacion = Teclado1.getKey() ; 
	  if (pulsacion != 0)			// Si el valor es 0 es que no se ha pulsado ninguna tecla
    		Serial.println(pulsacion);	

}
