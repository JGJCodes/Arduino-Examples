/*------------------------------------------Programa----------------------------------------------- */ 
// Algoritmo.- Prender desde el Pin 2-9 (LEDs) mediante un arreglo donde se encuentran ubicados 
// los PINES del Arduino y usando un ciclo ―FOR‖ acceder y prender cada uno de los PINES. 

int pin[]={2,3,4,5,6,7,8,9}; // se declara este arreglo, para el acceso a cada PIN que se va a usar. 

// Se inicializan del Pin 2 – 9 Digital como Salida. 
void setup(){ 
	int i; 	//variable utilizada como contador. 
	for(i=0;i<8;i++){ //Ciclo para configurar cada uno de los PINES como de Salida. 
		pinMode(pin[i],OUTPUT);
	} 
} 

void loop(){ 
	int i; 	//Variable utilizada como contador. 
	for(i=0;i<8;i++){ //Ciclo para Encender cada uno de los PINES y generar la secuencia de ida. 
	  digitalWrite(pin[i],HIGH); // Prende el PIN # del arreglo pin en la posición ―i‖ ejemplo: 
	  delay(100); // si i=0 entonces pin[0] por lo tanto pin[0]=2, esperamos 
	  digitalWrite(pin[i],LOW); //100 mili-segundos y por último se apaga ese mismo PIN #. 
	} 
	for(i=6;i>0;i--){ 
		//Ciclo para Encender cada uno de los PINES y generar la secuencia de ida. 
		digitalWrite(pin[i],HIGH); // Prende el PIN # del arreglo pin en la posición ―i‖ ejemplo: 
		delay(100); // si i=0 entonces pin[0] por lo tanto pin[0]=2, esperamos 
		digitalWrite(pin[i],LOW); //100 mili-segundos y por último se apaga ese mismo PIN #. 
	} 
} 
/*----------------------------------------Fin de Programa--------------------------------------------- */