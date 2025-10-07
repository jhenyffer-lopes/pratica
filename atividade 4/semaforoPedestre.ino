int ledCarroVermelho = 13;
int ledCarroAmarelo = 12;
int ledCarroVerde = 11;
int ledPedestreVermelho = 10;
int ledPedestreVerde = 9;
int pinoBotao = 2;

void setup() {
  pinMode(ledCarroVermelho, OUTPUT);
  pinMode(ledCarroAmarelo, OUTPUT);
  pinMode(ledCarroVerde, OUTPUT);
  pinMode(ledPedestreVermelho, OUTPUT);
  pinMode(ledPedestreVerde, OUTPUT);
  pinMode(pinoBotao, INPUT_PULLUP);
}

void loop() {
  digitalWrite(ledCarroVerde, HIGH);
  digitalWrite(ledPedestreVermelho, HIGH);

  if (digitalRead(pinoBotao) == LOW) {
    delay(50);
    digitalWrite(ledCarroVerde, LOW);
    digitalWrite(ledCarroAmarelo, HIGH);
    delay(2000);
    digitalWrite(ledCarroAmarelo, LOW);
    digitalWrite(ledCarroVermelho, HIGH);
    delay(1000);
    digitalWrite(ledPedestreVermelho, LOW);
    digitalWrite(ledPedestreVerde, HIGH);
    delay(5000);
    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPedestreVerde, LOW);
      delay(250);
      digitalWrite(ledPedestreVerde, HIGH);
      delay(250);
    }
    digitalWrite(ledPedestreVerde, LOW);
    digitalWrite(ledPedestreVermelho, HIGH);
    delay(1000);
    digitalWrite(ledCarroVermelho, LOW);
  }
}
