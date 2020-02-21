/*
Enciende y apaga una bombilla de 220V, cada 2 segundos, mediante
un rel? conectado al PIN 8 de Arduino
*/

int relayPin = 8;
// PIN al que va conectado el rel?

void setup(){
	pinMode(relayPin, OUTPUT);
}

void loop() {
	digitalWrite(relayPin, HIGH);
	delay(2000);
  digitalWrite(relayPin, LOW);
  delay(2000);
// ENCENDIDO
// APAGADO
}