#include <Arduino.h>
#line 1 "c:\\Users\\luisb\\OneDrive\\Documents\\Arduino\\Uso_de_funciones\\Uso_de_funciones.ino"
int tiempo = 60;
int pin;
#line 3 "c:\\Users\\luisb\\OneDrive\\Documents\\Arduino\\Uso_de_funciones\\Uso_de_funciones.ino"
void setup();
#line 9 "c:\\Users\\luisb\\OneDrive\\Documents\\Arduino\\Uso_de_funciones\\Uso_de_funciones.ino"
void secuencia1();
#line 20 "c:\\Users\\luisb\\OneDrive\\Documents\\Arduino\\Uso_de_funciones\\Uso_de_funciones.ino"
void secuencia2();
#line 30 "c:\\Users\\luisb\\OneDrive\\Documents\\Arduino\\Uso_de_funciones\\Uso_de_funciones.ino"
void loop();
#line 3 "c:\\Users\\luisb\\OneDrive\\Documents\\Arduino\\Uso_de_funciones\\Uso_de_funciones.ino"
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


