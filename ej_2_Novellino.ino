void setup()
{
  pinMode(7, OUTPUT);//esto define el pin 7 como salida 
  pinMode(2, OUTPUT);//esto define el pin 2 como salida 
  pinMode(3, OUTPUT);//esto define el pin 3 como salida 
  pinMode(4, OUTPUT);//esto define el pin 4 como salida 
  pinMode(5, OUTPUT);//esto define el pin 5 como salida 
  pinMode(6, OUTPUT);//esto define el pin 6 como salida 
}

void loop()
{
  digitalWrite(7, HIGH);//esto define que el pin 7 se prenda 
  digitalWrite(2, HIGH);//esto define que el pin 2 se prenda 
  delay(3000); // Wait for 3000 millisecond(s)//esto define cuanto tiempo tiene que esperar (3 segundos)
  digitalWrite(2, LOW);//esto define que el pin 2 se apague
  digitalWrite(3, HIGH);//esto define que el pin 3 se prenda
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
}
