//c++
//programa que faz a led piscar (prograva que envia sinal alto para a saida 4)

void setup() {
  // put your setup code here, to run once:
pinMode(4, OUTPUT);// declaraçao da variavel e portal configurada pra saida  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4, HIGH);// envia sinal alto
delay (1000);
digitalWrite(4, LOW);// envia sinal baixo
delay (1000);// espera 1 segundo

}
