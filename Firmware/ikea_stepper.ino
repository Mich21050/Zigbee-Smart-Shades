
// Include the AccelStepper library:
#include <AccelStepper.h>

// Pin definitions:
#define motorPin1  8      // IN1 on the ULN2003 driver
#define motorPin2  9      // IN2 on the ULN2003 driver
#define motorPin3  10     // IN3 on the ULN2003 driver
#define motorPin4  11     // IN4 on the ULN2003 driver
#define pwm_pin 6
int pwm_value = 0;
int target_steps = 0;

// stepper interface
#define MotorInterfaceType 8

// AccelStepper definition
AccelStepper stepper = AccelStepper(MotorInterfaceType, motorPin1, motorPin3, motorPin2, motorPin4);

void setup() {
  // Set the maximum steps per second / reset position
  stepper.setMaxSpeed(700);
  stepper.setCurrentPosition(0);
  
  pinMode(pwm_pin, INPUT);
  Serial.begin(115200);
}

void loop() {
  //read pwm, print position
  Serial.println(stepper.currentPosition());
  pwm_value = pulseIn(pwm_pin, HIGH);
  
// if loops / motor controll
  if(pwm_value == 375){
    target_steps = -40960;
  }
  else{
    if(pwm_value > 1520 && pwm_value < 1625){
     while (stepper.currentPosition() != 0) {
    stepper.setSpeed(500);
    stepper.runSpeed();
  } 
      }
  else{
    if(pwm_value > 84 && pwm_value < 88){
   while (stepper.currentPosition() != -40000) {
    stepper.setSpeed(-700);
    stepper.runSpeed();
  }
  }
  }
  }
  }
