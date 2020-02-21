#include <MFRC522.h>//Descargar e incluir la librer�a
#include <Servo.h>
#include <SPI.h>
#include <LiquidCrystal.h>

/*
Pins	  SPI	      UNO  Mega2560  Leonardo
1 (NSS) SAD (SS)   10     53        10
2       SCK        13     52        SCK1
3       MOSI       11     51        MOSI1
4       MISO       12     50        MISO1
5       IRQ        *      *         *
6       GND       GND     GND       GND
7       RST        5      ?         Reset
8      +3.3V (VCC) 3V3     3V3       3.3V
* No necesario
*/

#define SAD 10
#define RST 5
MFRC522 nfc(SAD, RST);
LiquidCrystal lcd(2,3,9,8,7,4);
Servo servo;
//#define ledPinAbierto  2
//#define ledPinCerrado  3


void setup() {
  //pinMode(ledPinAbierto  , OUTPUT);   
  //pinMode(ledPinCerrado, OUTPUT);   
  SPI.begin();
  Serial.begin(115200);
  Serial.println("Buscando RC522");
  nfc.begin();
  byte version = nfc.getFirmwareVersion();
  if (! version) {//Entra si no encuentra el m�dulo.
    Serial.print("No ha encontrado RC522");
    while(1); //detener
  }
  servo.attach(6);
  servo.write(0);
  lcd.begin(16,2);
  lcd.print("   Pase su tarjeta");
  Serial.print("Ha encontrado RC522");
  Serial.print("Firmware version 0x");
  Serial.print(version, HEX);
  Serial.println(".");
}

#define AUTHORIZED_COUNT 2 //Para autoriazar m�s tarjetas ponemos el n�mero aqui y la a�adimos abajo
byte Authorized[AUTHORIZED_COUNT][6] = {

                            {0x83, 0xF4, 0x8D, 0xC6, 0x3C,}
                            ,{0x4, 0xDD, 0xB5, 0x7C, 0x10,}
                           //,{0x10, 0x14, 0x39, 0x2E, 0xFF, 0xFF, } ejemplo de como autorizar m�s tarjetas  0x83,.....
                            
                          };
                          
void printSerial(byte *serial);
boolean isSame(byte *key, byte *serial);
boolean isAuthorized(byte *serial);



void loop() {
  byte status;
  byte data[MAX_LEN];
  byte serial[5];
  boolean Abierto = false;
  //digitalWrite(ledPinAbierto, Abierto);
  //digitalWrite(ledPinCerrado, !Abierto);
  status = nfc.requestTag(MF1_REQIDL, data);
  int angulo = 0;
  if (status == MI_OK) {
    status = nfc.antiCollision(data);
    memcpy(serial, data, 5);
    
    if(isAuthorized(serial))
    { 
      Serial.println("Autorizado");
      Abierto = true;
      angulo = 90;
      lcd.setCursor(4,0);
      lcd.print("Acceso Autorizado");
    }
    else
    { 
      printSerial(serial);
      Serial.println("NO autorizado");
      Abierto = false;
      lcd.clear();
      lcd.setCursor(4,0);
      lcd.print("Acceso Denegado");
    }
    
    nfc.haltTag();
    servo.write(angulo);
    //digitalWrite(ledPinAbierto, Abierto);
    //digitalWrite(ledPinCerrado, !Abierto);
    delay(2000);
    lcd.setCursor(0,0);
    lcd.print("   Pase su tarjeta");
    servo.write(0);
  }//if (status == MI_OK)

  delay(500);

}//void loop()

boolean isSame(byte *key, byte *serial)
{
    for (int i = 0; i < 4; i++) {
      if (key[i] != serial[i])
      { 
        return false; 
      }
    }
    
    return true;

}

boolean isAuthorized(byte *serial)
{
    for(int i = 0; i<AUTHORIZED_COUNT; i++)
    {
      if(isSame(serial, Authorized[i]))
        return true;
    }
   return false;
}

void printSerial(byte *serial)
{
        Serial.print("Serial:");
    for (int i = 0; i < 5; i++) {// aumentar a 5 para leer el n�mero de la tarjeta completo
      Serial.print(serial[i], HEX);
      Serial.print(" ");
    }
}
