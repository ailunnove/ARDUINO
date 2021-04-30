void setup()
//esto define al pin 4 como entrada y al 3 como salida
{
  pinMode(4, INPUT);//esto define al pin 4 como entrada
  pinMode(2, OUTPUT);//esto define  al pin 2 como entrada
  pinMode(3, OUTPUT);//esto define al pin 3 como salida
}
//HOLA LINDA
void loop()//esto define cuando se prende y se apaga el led
{
  if (digitalRead(4) == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    //esto define el timepo de espera
  
  }
  delay(10); // Delay a little bit to improve simulation performance
}
