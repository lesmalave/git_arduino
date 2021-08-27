/*
Codigo de prueba Usando Funciones en arduino
*/

int tiempo = 50;
int pin;
void setup() {
  for(pin=7;pin<=13;pin++)
  {
    pinMode(pin,OUTPUT);
  }
 }
void secuencia1()
{
for(pin=7;pin<=13;pin++)
{
  digitalWrite(pin,HIGH);
  delay(tiempo);
  digitalWrite(pin, LOW);
  delay(tiempo);
  }
}
  
  void secuencia2()
  {
for(pin=13;pin>=7;pin--)
{
  digitalWrite(pin,HIGH);
  delay(tiempo);
  digitalWrite(pin,LOW);
  delay(tiempo);
  }
  }
void loop()
  {
    secuencia1();
    secuencia2();
  }

