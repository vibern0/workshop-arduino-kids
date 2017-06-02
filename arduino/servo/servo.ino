#include <Servo.h>

Servo servo1;


void setup() {

  pinMode(A0,OUTPUT);
  servo1.attach(A0);
  Serial.println("Ready");

}

void loop() {

  servo1.write(20);
  delay(500);
  servo1.write(30);
  delay(500);
} 
