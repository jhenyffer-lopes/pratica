int pinosLed[]= {13,12,11};
int tempo = 300;

void setup() {
  
  for( int i = 0; i<3; i++) {
    
    pinMode(pinosLed[i], OUTPUT);
  }
  
}
 
void loop () {
  for (int i = 0; i < 3; i++) {
    digitalWrite(pinosLed[i], HIGH);
    delay(tempo);
    digitalWrite(pinosLed[i], LOW);
    delay(tempo);
 }
}