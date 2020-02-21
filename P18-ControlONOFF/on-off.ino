#include <LiquidCrystal.h>
#include <Keypad.h>
#include <EEPROM.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
const byte Filas = 4;
const byte Cols = 4; 
int analog_pin = 0;
float temperatura;
int foco = 13;

byte Pins_Filas[] = {4, 3, 2, A5};
byte Pins_Cols[] = { A4, A3, A2, A1}; 
char Teclas [ Filas ][ Cols ] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'.','0','#','D'}
};

Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

void setup(){
  pinMode(foco, OUTPUT);
  lcd.begin(16,2);
  lcd.print("Temp:          C");
  lcd.setCursor(0,1);
  lcd.print("Refer:         C");
}

void loop(){
  char pulsacion = Teclado1.getKey() ; 
  if (pulsacion != NO_KEY){
		if(pulsacion == 'B'){
			lcd.setCursor(8,1);
			lcd.print("     ");
		}
		
	}
	float referencia= EEPROM.read(1);
  
  
  temperatura = analogRead(analog_pin);
  temperatura = 5.0*temperatura*100.0/1024.0;
  lcd.setCursor(9,0);
  lcd.print(temperatura);
  lcd.setCursor(9,1);
  lcd.print(referencia);
  
  if(temperatura<=referencia){
    digitalWrite(foco, HIGH);
  }else{ 
    digitalWrite(foco, LOW);
  }
  delay(1000);
}
