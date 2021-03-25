#include <Servo.h>
// define beide Servos (von vorne der Useless Box gesehen)
#define LEFT_SERVO_SIGNAL_PIN  8
#define RIGHT_SERVO_SIGNAL_PIN  9

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

int action = 2; //mit 0 initialisieren

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
    //action = random(1,14);
    if (action == 1)
    {
      servoMotor1.writeMicroseconds(ROTATE_COUNTERCLOCKWISE);
      delay(1100);
      servoMotor1.writeMicroseconds(STOP);
      delay(2000);
      servoMotor1.writeMicroseconds(ROTATE_CLOCKWISE);
      delay(1100);
      servoMotor1.writeMicroseconds(STOP);
      delay(2000);
    }

    else if (action == 2)
    {
      for (int i = 1; i <= 5; i++)
      {
        servoMotor1.writeMicroseconds(ROTATE_COUNTERCLOCKWISE);
        delay(200);
        servoMotor1.writeMicroseconds(STOP);
        delay(1000);
      }
      servoMotor1.writeMicroseconds(ROTATE_CLOCKWISE);
      delay(500);
      servoMotor1.writeMicroseconds(STOP);
      delay(500);
      servoMotor1.writeMicroseconds(ROTATE_CLOCKWISE);
      delay(500);
      servoMotor1.writeMicroseconds(STOP);
      delay(500);
      servoMotor1.writeMicroseconds(ROTATE_COUNTERCLOCKWISE);
      delay(1100);
      servoMotor1.writeMicroseconds(STOP);
      delay(500);
      servoMotor1.writeMicroseconds(ROTATE_CLOCKWISE);
      delay(1100);
      servoMotor1.writeMicroseconds(STOP);
      delay(500);
    }

    else if (action == 3)
    {

    }

    else if (action == 4)
    {

    }

    else if (action == 5)
    {

    }

    else if (action == 6)
    {

    }

    else if (action == 7)
    {

    }

    else if (action == 8)
    {

    }

    else if (action == 9)
    {

    }

    else if (action == 10)
    {

    }

    else if (action == 11)
    {

    }

    else if (action == 12)
    {

    }

    else if (action == 13)
    {

    }

    else if (action == 14)
    {

    }
  }
  else if (rightSwitchStatus == LOW) {
    //action = random(1,14);

    servoMotor2.writeMicroseconds(ROTATE_CLOCKWISE);
    delay(1100);

    servoMotor2.writeMicroseconds(STOP);
    delay(2000);

    servoMotor2.writeMicroseconds(ROTATE_COUNTERCLOCKWISE);
    delay(1100);

    servoMotor2.writeMicroseconds(STOP);
    delay(2000);
  }
}
