#include <Servo.h>

Servo servo1;
Servo servo2;

#define VELOCIDADE 10

void setup() {

  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  servo1.attach(A0);
  servo2.attach(A1);
  Serial.println("Ready");

  servo1.write(90);
  servo2.write(90);

}

void loop() {

  for(int x = 0; x < 80; x++)
  {
    servo1.write(90+x);
    delay(VELOCIDADE);
  }
  for(int x = 0; x < 80; x++)
  {
    servo2.write(90+x);
    delay(VELOCIDADE);
  }
  for(int x = 80; x > 0; x--)
  {
    servo1.write(90+x);
    delay(VELOCIDADE);
  }
  for(int x = 80; x > 0; x--)
  {
    servo2.write(90+x);
    delay(VELOCIDADE);
  }
} 
