int ledVermelha = 13;
int ledAmarela = 12;
int ledVerde = 11;
void setup() { 
 pinMode(ledVermelha, OUTPUT);
 pinMode(ledAmarela, OUTPUT);
 pinMode(ledVerde, OUTPUT);
        
        
        
        
 }
  
 
void loop () {
    digitalWrite(ledVerde, HIGH);
    delay(3000);
    digitalWrite(ledVerde, LOW);
  
 
  for( int i = 0; i<3; i++) {
    digitalWrite(ledAmarela, HIGH);
    delay(500);
    digitalWrite(ledAmarela, LOW);
    delay(500);

  }
  digitalWrite(ledVermelha, HIGH);
    delay(3000);
    digitalWrite(ledVermelha, LOW);
    delay(3000);
}
      