int ledPin = 13; // Definición de la salida en el PIN 13

void setup() {    //Configuración 
  pinMode(ledPin, OUTPUT); // designa la salida digital al PIN 13 
} 

void loop() {  // bucle de funcionamiento 
  digitalWrite(ledPin, HIGH); // activa el LED
  
  delay(1000);                            // espera 1 seg. (tiempo encendido) 
  digitalWrite(ledPin, LOW); // desactiva el LED 
  delay(1000);                            // espera 1 seg. (tiempo apagado) 
} 