//Aluno: Victor Hugo Anizau Barros

// Semáforo 1
int ledVermelho1 = 13; 
int ledAmarelo1 = 12; 
int ledVerde1 = 11;

// Semáforo 2
int ledVermelho2 = 3; 
int ledAmarelo2 = 2; 
int ledVerde2 = 1;

void setup() {
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT); 
  pinMode(ledVerde1, OUTPUT);
  
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT); 
  pinMode(ledVerde2, OUTPUT);
}

void loop() {
	//1° Etapa: Semaforo 1 - Verde | Semaforo 2 - Vermelho
  	digitalWrite(ledVerde1, HIGH);
  	digitalWrite(ledAmarelo1,LOW);
  	digitalWrite(ledVermelho1,LOW);
  	digitalWrite(ledVerde2, LOW);
  	digitalWrite(ledAmarelo2,LOW);
  	digitalWrite(ledVermelho2,HIGH);
  	delay(4500);
  
  	//2° Etapa: Semaforo 1 - Amarelo | Semaforo 2 - Vermelho
  	digitalWrite(ledVerde1,LOW);
  	digitalWrite(ledAmarelo1, HIGH);
  	digitalWrite(ledVermelho1, LOW);
  	delay(4500);
  
  	//3° Etapa: Semaforo 1 - Vermelho | Semaforo 2 - Verde
  	digitalWrite(ledAmarelo1,LOW); 
  	digitalWrite(ledVermelho1,HIGH);
  	digitalWrite(ledVermelho2,LOW);
  	digitalWrite(ledVerde2,HIGH);
  	delay(4500);
  
  	//4° Etapa: Semaforo 1 - Vermelhho | Semaforo 2 - Amarelo
  	digitalWrite(ledVerde2, LOW);
  	digitalWrite(ledAmarelo2,HIGH);
  	delay(4500);
}
