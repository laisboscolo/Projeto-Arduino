void setup() {
  // put your setup code here, to run once:
//  Pisca dois leds
// declarar as variaveis
 pinMode (8,OUTPUT);
 pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  liga os dois leds
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
//  esperar 1 segundo
  delay(1000);
//  desligas os dois leds
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
//  esperar 1 segundo
delay(1000);
  
}
