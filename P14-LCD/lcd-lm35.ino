#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//Hasta aqu? hemos declarado la librer?a para la LCD y los pines por donde le va a entrar la informaci?n.

float centi()
{// Funcion para leer el dato analogico y convertirlo a digital:
  int dato;
  float c;
  dato=analogRead(A0);
  
  c = (500.0 * dato)/1023;
  //Esta f?rmula sale de la relaci?n del sensor con los grados. ?sta es f?cilmente rastreable por la web pero vamos a intentar explicarla un poco: El sensor de temperatura LM35 responde a variaciones de 10 mV por cada grado cent?grado. Si el sensor detecta 1 grado cent?grado a la salida del sensor obtendr?amos 10 mV. Ejemplo: 26,4?C = 264 mV = 0.264 V.
//Tenemos que el convertidor de anal?gico a digital es de 10 bits de resoluci?n, los valores variar?n entre 0 y 1023, entonces Vout= (5V*Dato)/1023 siendo  ( 0 < Dato < 1023 ) y para ajustar la escala a grados cent?grados: Vout = ((5V*Dato)*100)/1023
  return (c);
}


float kelvin(float cent)
{
  float k;
  k=cent+273.15;
  return(k);
}

float fahren(float cent)
{
  float f;
  f=cent*1.8+32;
  return (f);
}


float rankin(float cent)
{
  float r;
  r=(cent + 273.15)*1.8;
  return (r);
}

//Hasta aqu? hemos declarado las funciones de conversi?n del dato anal?gico de entrada del sensor en grados celsius en sus respectivas equivalencias.

void setup() {
  // Definimos la LCD con dimension 2x16 y definimos los caracteres que deben salir en las filas:
lcd.begin(16,2);
lcd.print("C=      K=");
lcd.setCursor(0,1);
lcd.print("Temperatura");
}

//Hasta aqu? hemos definido qu? queremos que salga impreso por la pantalla y el tama?o de ?sta.
void loop() {
  // put your main code here, to run repeatedly: 
  float Centigrados = centi();
  float Fahrenheit = fahren (Centigrados);
  float Rankin = rankin (Centigrados);
  float Kelvin = kelvin (Centigrados);
  lcd.setCursor(2,0);
  lcd.print(Centigrados);
  lcd.setCursor(10,0);
  lcd.print(Kelvin);
  delay(200);
  //Por ?ltimo, hemos usado la parte activa del programa o bucle para que constantemente para cada variaci?n recalcule los datos. 
  
}