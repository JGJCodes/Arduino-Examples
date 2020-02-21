#include <LiquidCrystal.h>
#include <Keypad.h>
#include <EEPROM.h>
#include <PID_v1.h>

const int analog_pin = 0;
const int foco = 6;
const byte Filas = 4;
const byte Cols = 4;

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
byte Pins_Filas[] = {4, 3, 2, A5};
byte Pins_Cols[] = { A4, A3, A2, A1}; 
char Teclas [ Filas ][ Cols ] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'%','0','#','D'}
};
Keypad Teclado1 = Keypad(makeKeymap(Teclas), Pins_Filas, Pins_Cols, Filas, Cols);

double temperatura, referencia, salida;
double Kp=200, Ki=50, Kd=100;
PID myPID(&temperatura, &salida, &referencia, Kp, Ki, Kd, DIRECT);

int WindowSize = 5000;
unsigned long windowStartTime;

void setup(){
	Serial.begin(9600);
  pinMode(foco, OUTPUT);
  lcd.begin(16,2);
  lcd.print("Temp:          C");
  lcd.setCursor(0,1);
  lcd.print("Refer:         C");
	windowStartTime = millis();
  referencia= EEPROM.read(0);
	temperatura= EEPROM.read(1);
  myPID.SetOutputLimits(0, WindowSize);
  myPID.SetMode(AUTOMATIC);
	
}

void loop(){
  referencia= EEPROM.read(0);
  char pulsacion = Teclado1.getKey() ; 
  switch(pulsacion){
    case '1': referencia += 1; break;
    case '2': referencia += 10; break;
    case '3': referencia += 20; break;
    case '4': referencia += 30; break;
    case '5': referencia += 40; break;
    case '6': referencia += 50; break;
    case '7': referencia -= 1; break;
    case '8': referencia -= 10; break;
    case '9': referencia -= 20; break;
    case '%': referencia -= 30; break;
    case '0': referencia -= 40; break;
    case '#': referencia -= 50; break;
    case 'A': referencia = 0; break;
    case 'B': referencia = 100; break;
    case 'C': referencia = -100; break;
  }
  EEPROM.write(0,referencia);
  
  for(int i=0;i<30;i++){temperatura = analogRead(analog_pin)};
  temperatura = 5.0*temperatura*100.0/1024.0;
	EEPROM.write(1,temperatura);
  lcd.setCursor(9,0);
  lcd.print(temperatura);
  lcd.setCursor(9,1);
  lcd.print(referencia);

	myPID.Compute();

  if(millis() - windowStartTime > WindowSize){
    windowStartTime += WindowSize;
  }
  if(salida < millis() - windowStartTime){ 
		digitalWrite(foco, HIGH);
	}
  else{ 
		digitalWrite(foco, LOW);
	}

	Serial.println(referencia);
	Serial.println(temperatura);
	Serial.println(salida);
  delay(1000);
}