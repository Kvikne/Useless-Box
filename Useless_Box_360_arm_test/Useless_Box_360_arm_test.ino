#include <Servo.h>
// define beide Servos (von vorne der Useless Box gesehen)
#define LEFT_SERVO_SIGNAL_PIN  8
#define RIGHT_SERVO_SIGNAL_PIN  10

// define the duration of the signal in milliseconds
#define STOP 1500
#define ROTATE_CLOCKWISE   2000 //1530 - 2200
#define ROTATE_COUNTERCLOCKWISE  1000 //800 - 1470

// für die volle Distanz von Start bis Schalter umlegen:
// 1100 ms delay einstellen (im Hauptprogramm)

Servo servoMotor1;
Servo servoMotor2;

const int leftSwitchPin = 2;
int leftSwitchStatus = 0;
const int rightSwitchPin = 3;
int rightSwitchStatus = 0;

void setup()
{
  pinMode(leftSwitchPin, INPUT_PULLUP);
  pinMode(rightSwitchPin, INPUT_PULLUP);

  servoMotor1.attach(LEFT_SERVO_SIGNAL_PIN);
  servoMotor1.writeMicroseconds(STOP);

  servoMotor2.attach(RIGHT_SERVO_SIGNAL_PIN);
  servoMotor2.writeMicroseconds(STOP);
}

void loop()
{
  leftSwitchStatus = digitalRead(leftSwitchPin);
  rightSwitchStatus = digitalRead(rightSwitchPin);

  if (leftSwitchStatus == LOW) {
    delay(1000);
    servoMotor1.writeMicroseconds(ROTATE_CLOCKWISE);
    delay(870);
    servoMotor1.writeMicroseconds(STOP);
    delay(1000);
    servoMotor1.writeMicroseconds(ROTATE_COUNTERCLOCKWISE);
    delay(870);
    servoMotor1.writeMicroseconds(STOP);
    delay(2000);
  }
  else if (rightSwitchStatus == LOW) {
    delay(1000);
    servoMotor2.writeMicroseconds(ROTATE_COUNTERCLOCKWISE);
    delay(1000);
    servoMotor2.writeMicroseconds(STOP);
    delay(2000);
    servoMotor2.writeMicroseconds(ROTATE_CLOCKWISE);
    delay(1000);
    servoMotor2.writeMicroseconds(STOP);
    delay(2000);
  }
}
