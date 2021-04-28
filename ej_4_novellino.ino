void setup()
{
  pinMode(A0, INPUT);//define el pin A0 como entrada
  pinMode(11, OUTPUT);//define el pin 11 como salida
  pinMode(10, OUTPUT);//define el pin 10 como salida
}

void loop()
{
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);//da el valor de temperatura
  if (temperatura < 35) {//define si la temperatura es menor a 35
    digitalWrite(11, HIGH);//se prende el pin 11
    digitalWrite(10, LOW);// se apaga el pin 10
  } else {
    digitalWrite(11, LOW);//se apaga el pin 11
    digitalWrite(10, HIGH);//se prende el pin 10
  }
  delay(10); // Delay a little bit to improve simulation performance//define el tiempo de espera
}
