#include <PWM.h>

#define PWM_MOTOR_NEUTRAL                     (4915)

#define PIN_MOTOR_SETP  10
#define PIN_MOTOR_DIR   2

void setup() {
  // initialize all timers except for 0, to save time keeping functions
  InitTimersSafe();
  
  // setting the frequency to 50 Hz
  SetPinFrequency(PIN_MOTOR_SETP, 4000);
  
  // still the motor
  pwmWriteHR(PIN_MOTOR_SETP, PWM_MOTOR_NEUTRAL);

  // initialize direction control pin
  pinMode(PIN_MOTOR_DIR, OUTPUT);
  digitalWrite(PIN_MOTOR_DIR, LOW);
}

void loop() {
  digitalWrite(PIN_MOTOR_DIR, HIGH);
  delay(5000);
  digitalWrite(PIN_MOTOR_DIR, LOW);
  delay(5000);
}

