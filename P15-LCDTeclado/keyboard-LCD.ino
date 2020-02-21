#include <LiquidCrystal.h>
#include <Keypad.h>

LiquidCrystal lcd(12, 11, 8, 7, 6, 5);
const byte Filas = 4;
const byte Cols = 4; 

byte Pins_Filas[] = {A5, 2, 3, 4};
byte Pins_Cols[] = { A1, A2, A3, A4}; 
char Teclas [ Filas ][ Cols ] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

void setup(){
lcd.begin(16,2);
lcd.print("Hola Viejo");
}

void loop(){
char pulsacion = Teclado1.getKey() ; 
if (pulsacion != 0){			
    lcd.setCursor(0,1);
    lcd.print(pulsacion);
}
}