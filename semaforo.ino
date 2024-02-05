//github - https://github.com/afonsofarias

void setup()
{
  pinMode(13, OUTPUT); //vermelho pedestre
  pinMode(12, OUTPUT); //verde pedestre
  pinMode(11, OUTPUT); //vermelho carro
  pinMode(10, OUTPUT); //amarelo carro
  pinMode(9, OUTPUT); // verde carro
  pinMode(8, OUTPUT); // vermelho carro 2
  pinMode(7, OUTPUT); // amarelo carro 2
  pinMode(6, OUTPUT); // verde carro 2
}

void loop()
{
  //pedestre parado e carros andando
  digitalWrite(13, HIGH);//vermelho pedestre
  digitalWrite(9, HIGH);// verde carro
  digitalWrite(6, HIGH);// verde carro 2
  digitalWrite(12, LOW);//verde pedestre
  digitalWrite(10, LOW); // amarelo carro
  digitalWrite(11, LOW); // vermelho carro
  digitalWrite(7, LOW); // amarelo carro 2
  digitalWrite(8, LOW); // vermelho carro 2
  delay(4000); //40 ANOS LOGO COLOQUEI 4000
  
  //atenção
  digitalWrite(9, LOW);// verde carro
  digitalWrite(6, LOW);// verde carro 2
  digitalWrite(7, HIGH); // amarelo carro 2
  digitalWrite(10, HIGH); // amarelo carro
  digitalWrite(13, HIGH);//vermelho pedestre  
  delay(600); // NASCI DIA 24 ENTAO 6 LOGO COLOQUEI 600
  
  //pedestre andando e carro parado
  digitalWrite(13, LOW);//vermelho pedestre
  digitalWrite(12, HIGH);//verde pedestre
  digitalWrite(9, LOW);// verde carro
  digitalWrite(10, LOW); // amarelo carro
  digitalWrite(11, HIGH); // vermelho carro
  digitalWrite(6, LOW);// verde carro 2
  digitalWrite(7, LOW); // amarelo carro 2
  digitalWrite(8, HIGH); // vermelho carro 2
  delay(2000); // METADE DE 40 ANOS = 20 LOGO COLOQUEI 2000

}
