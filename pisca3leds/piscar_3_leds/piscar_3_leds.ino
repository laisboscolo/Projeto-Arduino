//c++

void setup() {
  // put your setup code here, to run once:
//  Pisca 3 leds
// declarar as variaveis
 pinMode (8,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  liga os 3 leds
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,HIGH);
//  esperar 1 segundo
  delay(1000);
//  desligas os 3 leds
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3,LOW);
//  esperar 1 segundo
delay(1000);

}
