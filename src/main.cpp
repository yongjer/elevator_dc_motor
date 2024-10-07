#include <Arduino.h>

// elevator motor pins (dc motor) pin 8 and 9
#define MOTOR_PIN1 8
#define MOTOR_PIN2 9

// test the motor
void setup() {
  // set the motor pins as output
  pinMode(MOTOR_PIN1, OUTPUT);
  pinMode(MOTOR_PIN2, OUTPUT);
}

void loop() {
  // turn the motor on
  digitalWrite(MOTOR_PIN1, HIGH);
  digitalWrite(MOTOR_PIN2, LOW);
  delay(1000);
  // turn the motor off
  digitalWrite(MOTOR_PIN1, LOW);
  digitalWrite(MOTOR_PIN2, HIGH);
  delay(1000);
}