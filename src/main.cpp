#include <Arduino.h>

// Pines
#define ledEnPCB 1

// Tiempos
#define delayTimeOff 250
#define delayTimeOn 250


void blink();


void setup() {
  pinMode(ledEnPCB, OUTPUT);
  digitalWrite(ledEnPCB, LOW);
}


void loop() {
  // put your main code here, to run repeatedly:
  blink();
}


void blink() {
  delay(delayTimeOff);
  digitalWrite(ledEnPCB, HIGH);
  delay(delayTimeOn);
  digitalWrite(ledEnPCB, LOW);
}
