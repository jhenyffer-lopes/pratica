int pinoSIG = 7;    
int pinoBuzzer = 8;
long duracao;
int distancia;

void setup() {
  pinMode(pinoSIG, OUTPUT);
  pinMode(pinoBuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 
  pinMode(pinoSIG, OUTPUT);
  digitalWrite(pinoSIG, LOW);
  delayMicroseconds(2);
  digitalWrite(pinoSIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinoSIG, LOW);

  
  pinMode(pinoSIG, INPUT);
  duracao = pulseIn(pinoSIG, HIGH);

  
  distancia = duracao * 0.034 / 2;

  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println(" cm");

  
  if (distancia <= 10) {
    tone(pinoBuzzer, 1500);
  } else if (distancia <= 50) {
    tone(pinoBuzzer, 1000, 200);
    delay(distancia * 2);
  } else if (distancia <= 100) {
    tone(pinoBuzzer, 1000, 200);
    delay(distancia * 4);
  } else {
    noTone(pinoBuzzer);
  }
}