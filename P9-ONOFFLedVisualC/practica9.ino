/*--------------------------------------------Programa----------------------------------------------- */ 
// Algoritmo.- Prender desde el Pin 2-9 (LEDs) mediante un arreglo donde se encuentran ubicados 
// los PINES del Arduino; usando un ciclo ―FOR‖ acceder y prender cada uno de los PINES. 

int pin[]={2,3,4,5,6,7,8,9}, i; // Se declara este arreglo, para el acceso a cada PIN que se va a usar, 
// Se inicializan del Pin 2 – 9 Digital como Salida. También se declara ―i‖ para el uso como contador 
byte Csharp=0; 
//Se declara la variable Csharp tipo byte que vamos a recibir de la PC 

void setup() { 
	Serial.begin(9600); // Se inicializa el Puerto Serial (RS-232) a 9600 bps 
	for(i=0;i<8;i++){ 
		//Ciclo para configurar cada uno de los PINES como de Salida. 
		pinMode(pin[i], OUTPUT); 
	} 
} 

void loop() { 
	if (Serial.available() > 0) { 
		Csharp=Serial.read(); 
		//Pregunta si hay datos que recibir del Puerto Serial. 
		//Se guarda lo mandado de la PC en la variable Csharp. 
		for(i=0;i<8;i++){ 
			digitalWrite(pin[i],bitRead(Csharp, i)); //Se analiza bit por bit el dato Csharp con la 
		}// función ―bitRead‖. La variable ―i‖, indica el bit del byte y también el numero del Pin en el 
	}//arreglo, cuando i=0, entonces analizará el ―bit 0‖ del byte Csharp: Si el ―bit 0‖ = 1, prenderá el 
} 
// ―pin[0]‖ osea el ―PIN 2‖. Si es ―0‖ entonces lo apagará y así sucesivamente dependiendo del ciclo. 
/*----------------------------------------Fin de Programa--------------------------------------------- */