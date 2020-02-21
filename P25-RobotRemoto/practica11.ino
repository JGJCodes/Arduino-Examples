String readString;

void setup() {
Serial.begin(9600);
//Salidas digitales
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);


}

void loop() {
while (Serial.available()) {
delay(10);
if (Serial.available() >0) {
char c = Serial.read();
readString += c;
}
}
if (readString.length() >0) {

if (readString == "f") {

      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);

}

if (readString == "b") {

      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
}

if (readString == "l") {

      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
}

if (readString == "r") {

      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
}

if (readString == "x") {

      digitalWrite(2, HIGH);

}

if (readString == "y") {


      digitalWrite(2, LOW);
}

if (readString == "w") {

      digitalWrite(3, HIGH);

}

if (readString == "z") {


      digitalWrite(3, LOW);
}


if (readString == "s") {
  
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      
}
readString="";
}
}
