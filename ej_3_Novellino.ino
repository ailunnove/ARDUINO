void setup()
{
  pinMode(3, INPUT);//define el pin 3 como entrada
  pinMode(8, INPUT);//define el pin 8 como entrada
  pinMode(2, OUTPUT);//define el pin 2 como salida
  pinMode(9, OUTPUT);//define el pin 9 como salida
}

void loop()
{
  if (digitalRead(3) == HIGH) {//si leo el pin 3 y esta en alto
    if (digitalRead(8) == HIGH) {//si leo en pin 8 y esta en alto
      digitalWrite(2, HIGH);//se prende el pin 2
      tone(9, 523, 1000); //define el tono de la alarma en el pin 9 con una frecuencia de 523 y una distancia de 1000
    } else {//si no se cumple la condicion anterior pasa esto
      noTone(9);//se apaga el parlante
      digitalWrite(2, LOW);//el pin 2 se apaga
    }
  } else {
  }
  delay(10); // Delay a little bit to improve simulation performance//define el tiempo de espera
}
