#include <Servo.h>

#define SERVO_SIGNAL_PIN  8

// define the duration of the signal in milliseconds
#define STOP 1500
#define ROTATE_CLOCKWISE   2000
#define ROTATE_COUNTERCLOCKWISE  1000

Servo servoMotor;

const int leftSwitchPin = 2;
int leftSwitchStatus=0;

void setup()
{
    pinMode(leftSwitchPin, INPUT_PULLUP);
}

void loop()
{
  leftSwitchStatus = digitalRead(leftSwitchPin);

  if (leftSwitchStatus == LOW){
    servoMotor.attach(SERVO_SIGNAL_PIN);

    for (int i = 1; i <= 1000; i++)
      {
        servoMotor.writeMicroseconds(ROTATE_CLOCKWISE);
        delay(2);
        servoMotor.writeMicroseconds(STOP);
        delay(10);
      }

    //servoMotor.writeMicroseconds(ROTATE_CLOCKWISE);
    //delay(1000);
    
    servoMotor.writeMicroseconds(STOP);
    delay(2000);

    servoMotor.writeMicroseconds(ROTATE_COUNTERCLOCKWISE);
    delay(1000);

    servoMotor.writeMicroseconds(STOP);

    for (int i = 1; i <= 500; i++)
      {
        servoMotor.writeMicroseconds(ROTATE_CLOCKWISE);
        delay(1);
        servoMotor.writeMicroseconds(STOP);
        delay(1);
        servoMotor.writeMicroseconds(ROTATE_CLOCKWISE);
        delay(5);
        servoMotor.writeMicroseconds(STOP);
        delay(1);
      }
      
    servoMotor.writeMicroseconds(ROTATE_COUNTERCLOCKWISE);
    delay(1000);

    servoMotor.writeMicroseconds(STOP);
  }
}
