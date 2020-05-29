# 1 "c:\\Users\\luisb\\OneDrive\\Documents\\Arduino\\Uso_de_funciones\\Uso_de_funciones.ino"
int tiempo = 60;
int pin;
void setup() {
  for(pin=7;pin<=13;pin++)
  {
    pinMode(pin,0x1);
  }
 }
void secuencia1()
{
for(pin=7;pin<=13;pin++)
{
  digitalWrite(pin,0x1);
  delay(tiempo);
  digitalWrite(pin, 0x0);
  delay(tiempo);
  }
}

  void secuencia2()
  {
for(pin=13;pin>=7;pin--)
{
  digitalWrite(pin,0x1);
  delay(tiempo);
  digitalWrite(pin,0x0);
  delay(tiempo);
  }
  }
void loop()
  {
    secuencia1();
    secuencia2();
  }
