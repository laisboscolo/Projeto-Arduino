//c++

void setup() {
  // put your setup code here, to run once:
//  Pisca 4 leds
// declarar as variaveis
 pinMode (8,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  liga os 4 leds
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
//  esperar 1 segundo
  delay(1000);
//  desligas os 4 leds
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
//  esperar 1 segundo
delay(1000);
}
