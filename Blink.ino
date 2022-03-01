/*

C++ code

Created on February 28 2022
By Infinity de Guzman

*/

int pin7 = 7;

void setup()
{
  pinMode(pin7, OUTPUT);
}

void loop()
{
  digitalWrite(pin7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
