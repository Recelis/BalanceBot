#include <Arduino.h>
#include "Propulsion.h"

#define LED D0

Propulsion propul;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
    
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("blinking");
  digitalWrite(LED,LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
  propul.driveRobot(100.0, 0.0);
}