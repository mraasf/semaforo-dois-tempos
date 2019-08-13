//by andriely frança

void setup(){
  pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    

    

   
  
}

void loop()
//tempo 01
  // sinal um vermelho(fechado e sinal dois verde(aberto por 15 segndos))
{
  digitalWrite(2, HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(15000); // 
  // sinal vermelho piscam indicando que vai mudar{
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(2,HIGH);
  digitalWrite(2,LOW);
  delay(100);
  digitalWrite(2, HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  //sinal 02 verde pisca indicando que vai fechar
  digitalWrite(7,LOW);
  delay(100);
  digitalWrite(7,HIGH);
  digitalWrite(7, LOW);
  delay(100);
  digitalWrite(7, HIGH);
  digitalWrite(7,HIGH);
  delay(15000); 
  // sinal 02 amarelo acende por 3 segundos, verde02 apaga, vermelho01 apaga e
  //e verde 01 acende
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(3000);
  digitalWrite(6,LOW);// 

  //tempo 02
  // sinal 01 vermelho aberto 
  digitalWrite(2, LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(15000); // 
  
  //sinal 01 verde pisca indicando que vai fechar
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(4,HIGH);
 
  delay(15000); 
  // sinal 02 amarelo acende por 3 segundos, verde02 apaga, vermelho01 apaga e
  //e verde 01 acende
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(3000);
  digitalWrite(3,LOW);

  
}
