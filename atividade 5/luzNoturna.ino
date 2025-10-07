int pinoLDR = A0;
int pinoLED = 9;

int limiteLuz = 300;


void setup() {
pinMode(pinoLED, OUTPUT);
Serial.begin(9600);
}

void loop() {

int valorLuz = analogRead(pinoLDR);
Serial.print("Valor da Luz: ");
Serial.println(valorLuz);
if (valorLuz < limiteLuz) {
    digitalWrite(pinoLED, HIGH);
} else {
digitalWrite(pinoLED, LOW);
}

delay(100);
}