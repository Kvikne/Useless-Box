#include <Servo.h> //Die Servobibliothek wird aufgerufen. Sie wird benötigt, damit die Ansteuerung des Servos vereinfacht wird.
Servo leftServo; //Einen Servo mit dem Namen "leftServo" erstellen.
Servo rightServo; //Einen Servo mit dem Namen "rightServo" erstellen.

int action = 0; //Action mit 0 initialisieren.
int leftSwitchStatus = 0, leftPosEnd = 169, leftPosStart = 0, leftPosOver = 180; //Initialisierungswerte für den linken Servo.
int rightSwitchStatus = 0, rightPosEnd = 9, rightPosStart = 180, rightPosOver = 0; //Initialisierungswerte für den rechten Servo.
const int leftSwitchPin = 3; //Pin, an dem der Schalter angeschlossen ist
const int rightSwitchPin = 2; //Pin, an dem der Schalter angeschlossen ist
const int leftServoPin = 9; //Anschluss-Pin Linker Servo.
const int rightServoPin = 8; //Anschluss-Pin Rechter Servo

void setup() {
  pinMode(leftSwitchPin, INPUT_PULLUP);
  pinMode(rightSwitchPin, INPUT_PULLUP);
  leftServo.attach(leftServoPin);
  leftServo.write(leftPosStart);

  rightServo.attach(rightServoPin);
  rightServo.write(rightPosStart);
}

void loop()
{
  leftSwitchStatus = digitalRead(leftSwitchPin);
  rightSwitchStatus = digitalRead(rightSwitchPin);
  action = random(1, 16);
  // LINKER SERVO (leftPosEnd = 170, leftPosStart = 0, leftPosOver = 180) -----------------------------------------------
  if (leftSwitchStatus == LOW) {
    if (action == 1)
    {
      for (int i = leftPosStart; i <= 120; i++)
      {
        leftServo.write(i);
        delay(20);
      }
      delay(1000);
      leftServo.write(leftPosStart);
      delay(500);
      for (int i = leftPosStart; i < 150; i++)
      {
        leftServo.write(i);
        delay(20);
      }
      leftServo.write(leftPosEnd);
      delay(500);
      leftServo.write(leftPosStart);
    }


    else if (action == 2)
    {
      leftServo.write(leftPosEnd);
      delay(900);
      leftServo.write(leftPosStart);
    }

    else if (action == 3)
    {
      delay(4000);
      leftServo.write(leftPosEnd);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 4)
    {
      for (int i = leftPosEnd; i >= 35; i--)
      {
        leftServo.write(i);
        delay(20);
      }
      delay(2000);
      leftServo.write(leftPosStart);
      delay(200);
      leftServo.write(leftPosEnd);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 5)
    {
      delay(2000);
      leftServo.write(65);
      delay(550);
      leftServo.write(40);
      delay(200);
      leftServo.write(65);
      delay(200);
      leftServo.write(40);
      delay(200);
      leftServo.write(65);
      delay(200);
      leftServo.write(40);
      delay(200);
      leftServo.write(65);
      delay(200);
      leftServo.write(40);
      delay(200);
      leftServo.write(65);
      delay(200);
      leftServo.write(40);
      delay(200);
      leftServo.write(65);
      delay(2000);
      leftServo.write(leftPosStart);
      delay(800);
      leftServo.write(leftPosEnd);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 6)
    {
      for (int i = leftPosEnd; i >= 35; i--)
      {
        leftServo.write(i);
        delay(30);
      }
      delay(400);
      leftServo.write(leftPosStart);
      delay(1000);
      leftServo.write(leftPosEnd);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 7)
    {
      leftServo.write(leftPosEnd - 10);
      delay(2000);
      for (int i = 0; i < 7; i++)
      {
        leftServo.write(75);
        delay(100);
        leftServo.write(40);
        delay(100);
      }
      delay(500);
      leftServo.write(leftPosEnd);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 8)
    {
      for (int i = leftPosEnd; i >= 35; i--)
      {
        leftServo.write(i);
        delay(40);
      }
      delay(500);
      leftServo.write(leftPosStart);
      delay(1000);
      for (int i = leftPosStart; i <= leftPosEnd - 10; i++)
      {
        leftServo.write(i);
        delay(40);
      }
      delay(500);
      leftServo.write(leftPosEnd);
      delay(400);
      leftServo.write(leftPosStart);
    }

    else if (action == 9)
    {
      leftServo.write(leftPosStart);
      delay(2000);
      for (int i = 0; i < 3; i++)
      {
        leftServo.write(65);
        delay(200);
        leftServo.write(40);
        delay(200);
      }
      delay(1500);
      leftServo.write(leftPosEnd);
      delay(400);
      leftServo.write(leftPosStart);
      delay(3000);
      leftServo.write(leftPosEnd);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 10)
    {
      delay(1000);
      for (int i = leftPosEnd; i >= leftPosStart; i--)
      {
        leftServo.write(i);
        delay(50);
      }
      delay(2000);
      leftServo.write(leftPosStart);
      delay(200);
      leftServo.write(leftPosEnd);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 11)
    {
      for (int i = leftPosEnd; i >= 60; i--)
      {
        leftServo.write(i);
        delay(40);
      }
      for (int i = 0; i < 3; i++)
      {
        leftServo.write(60);
        delay(200);
        leftServo.write(40);
        delay(800);
      }
      leftServo.write(leftPosStart);
      delay(2000);
      leftServo.write(leftPosEnd);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 12)
    {
      leftServo.write(leftPosStart);
      delay(650);
      leftServo.write(leftPosEnd);
      delay(900);
      leftServo.write(leftPosStart);
    }

    else if (action == 13)
    {
      for (int i = leftPosEnd; i >= 35; i--)
      {
        leftServo.write(i);
        delay(40);
      }
      delay(1000);
      leftServo.write(leftPosStart);
      delay(400);
      leftServo.write(leftPosEnd);
      delay(900);
      leftServo.write(leftPosStart);
    }

    else if (action == 14)
    {
      for (int i = leftPosEnd; i >= 140; i--)
      {
        leftServo.write(i);
        delay(40);
      }

      for (int i = rightPosStart; i <= 40; i--)
      {
        rightServo.write(i);
        delay(40);
      }
      delay(2000);
      leftServo.write(160);
      delay(1000);
      rightServo.write(20);
      delay(500);

      for (int i = 0; i < 4; i++)
      {
        leftServo.write(leftPosOver);
        delay(200);
        leftServo.write(160);
        rightServo.write(rightPosOver);
        delay(200);
        rightServo.write(20);
        delay(200);
      }
      delay(2000);
      leftServo.write(leftPosEnd);
      rightServo.write(rightPosStart);
      delay(1000);
      leftServo.write(leftPosStart);
    }

    else if (action == 15)
    {
      leftServo.write(160);
      delay(3000);
      for (int i = 160; i >= 120; i--)
      {
        leftServo.write(i);
        delay(50);
      }
      delay(2000);
      leftServo.write(leftPosOver);
      delay(500);
      leftServo.write(leftPosStart);
    }

    else if (action == 16)
    {
      leftServo.write(50);
      rightServo.write(130);
      delay(500);
      for (int i = 0; i < 4; i++)
      {
        for (int i = 0; i < 2; i++)
        {
          leftServo.write(60);
          delay(50);
          leftServo.write(50);
          delay(50);
        }
        delay(1000);
        for (int i = 0; i < 2; i++)
        {
          rightServo.write(120);
          delay(50);
          rightServo.write(130);
          delay(50);
        }
      }
      leftServo.write(80);
      rightServo.write(100);
      delay(500);
      for (int i = 0; i < 4; i++)
      {
        for (int i = 0; i < 2; i++)
        {
          leftServo.write(90);
          delay(50);
          leftServo.write(80);
          delay(50);
        }
        delay(1000);
        for (int i = 0; i < 2; i++)
        {
          rightServo.write(90);
          delay(50);
          rightServo.write(100);
          delay(50);
        }
      }
      leftServo.write(leftPosEnd);
      rightServo.write(rightPosStart);
      delay(1000);
      leftServo.write(leftPosStart);
    }

  }
  // RECHTER SERVO (rightPosEnd = 10, rightPosStart = 180, rightPosOver = 0) ------------------------------------------------------------------------------
  else if (rightSwitchStatus == LOW) {
    if (action == 1)
    {
      for (int i = rightPosStart; i >= 60; i--)
      {
        rightServo.write(i);
        delay(20);
      }
      delay(1000);
      rightServo.write(rightPosStart);
      delay(500);
      for (int i = rightPosStart; i >= 30; i--)
      {
        rightServo.write(i);
        delay(20);
      }
      rightServo.write(rightPosEnd);
      delay(900);
      rightServo.write(rightPosStart);
    }


    else if (action == 2)
    {
      rightServo.write(rightPosEnd);
      delay(900);
      rightServo.write(rightPosStart);
    }

    else if (action == 3)
    {
      delay(4000);
      rightServo.write(rightPosEnd);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 4)
    {
      rightServo.write(rightPosEnd + 10);
      delay(1000);
      for (int i = rightPosEnd + 10; i <= 145; i++)
      {
        rightServo.write(i);
        delay(20);
      }
      delay(2000);
      rightServo.write(rightPosStart);
      delay(200);
      rightServo.write(rightPosEnd);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 5)
    {
      delay(2000);
      rightServo.write(115);
      delay(550);
      rightServo.write(140);
      delay(200);
      rightServo.write(115);
      delay(200);
      rightServo.write(140);
      delay(200);
      rightServo.write(115);
      delay(200);
      rightServo.write(140);
      delay(200);
      rightServo.write(115);
      delay(200);
      rightServo.write(140);
      delay(200);
      rightServo.write(115);
      delay(200);
      rightServo.write(140);
      delay(200);
      rightServo.write(115);
      delay(2000);
      rightServo.write(rightPosStart);
      delay(800);
      rightServo.write(rightPosEnd);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 6)
    {
      rightServo.write(rightPosEnd + 10);
      delay(1000);
      for (int i = rightPosEnd + 10; i <= 145; i++)
      {
        rightServo.write(i);
        delay(30);
      }
      delay(400);
      rightServo.write(rightPosStart);
      delay(1000);
      rightServo.write(rightPosEnd);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 7)
    {
      rightServo.write(rightPosEnd + 10);
      delay(2000);
      for (int i = 0; i < 7; i++)
      {
        rightServo.write(105);
        delay(100);
        rightServo.write(140);
        delay(100);
      }
      delay(500);
      rightServo.write(rightPosEnd);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 8)
    {
      rightServo.write(rightPosEnd + 10);
      delay(1000);
      for (int i = rightPosEnd + 10; i <= 145; i++)
      {
        rightServo.write(i);
        delay(40);
      }
      delay(500);
      rightServo.write(rightPosStart);
      delay(1000);
      for (int i = rightPosStart; i >= rightPosEnd + 10; i--)
      {
        rightServo.write(i);
        delay(40);
      }
      delay(500);
      rightServo.write(rightPosEnd);
      delay(400);
      rightServo.write(rightPosStart);
    }

    else if (action == 9)
    {
      for (int i = 0; i < 3; i++)
      {
        rightServo.write(115);
        delay(200);
        rightServo.write(140);
        delay(200);
      }
      delay(1500);
      rightServo.write(rightPosEnd + 10);
      delay(500);
      rightServo.write(rightPosStart);
      delay(3000);
      rightServo.write(rightPosEnd);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 10)
    {
      rightServo.write(rightPosEnd + 10);
      delay(1000);
      for (int i = rightPosEnd + 10; i <= rightPosStart; i++)
      {
        rightServo.write(i);
        delay(50);
      }
      delay(2000);
      rightServo.write(rightPosStart);
      delay(200);
      rightServo.write(rightPosEnd);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 11)
    {
      rightServo.write(rightPosEnd + 10);
      delay(1000);
      for (int i = rightPosEnd + 10; i <= 120; i++)
      {
        rightServo.write(i);
        delay(40);
      }
      for (int i = 0; i < 3; i++)
      {
        rightServo.write(120);
        delay(200);
        rightServo.write(140);
        delay(800);
      }
      rightServo.write(rightPosStart);
      delay(2000);
      rightServo.write(rightPosEnd);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 12)
    {
      delay(1000);
      rightServo.write(rightPosEnd);
      delay(900);
      rightServo.write(rightPosStart);
    }

    else if (action == 13)
    {
      rightServo.write(rightPosEnd + 10);
      delay(1000);
      for (int i = rightPosEnd + 10; i <= 145; i++)
      {
        rightServo.write(i);
        delay(40);
      }
      delay(1000);
      rightServo.write(rightPosStart);
      delay(400);
      rightServo.write(rightPosEnd);
      delay(900);
      rightServo.write(rightPosStart);
    }
    else if (action == 14)
    {
      for (int i = rightPosEnd; i <= 140; i++)
      {
        rightServo.write(i);
        delay(40);
      }

      for (int i = leftPosStart; i >= 40; i++)
      {
        leftServo.write(i);
        delay(40);
      }
      delay(2000);
      rightServo.write(20);
      delay(1000);
      leftServo.write(160);
      delay(500);

      for (int i = 0; i < 4; i++)
      {
        rightServo.write(rightPosOver);
        delay(200);
        rightServo.write(20);
        leftServo.write(leftPosOver);
        delay(200);
        leftServo.write(160);
        delay(200);
      }
      delay(2000);
      rightServo.write(rightPosEnd);
      leftServo.write(leftPosStart);
      delay(1000);
      rightServo.write(rightPosStart);
    }

    else if (action == 15)
    {
      rightServo.write(20);
      delay(3000);
      for (int i = 20; i <= 40; i++)
      {
        rightServo.write(i);
        delay(50);
      }
      delay(2000);
      rightServo.write(rightPosOver);
      delay(500);
      rightServo.write(rightPosStart);
    }

    else if (action == 16)
    {
      rightServo.write(130);
      leftServo.write(50);
      delay(500);
      for (int i = 0; i < 4; i++)
      {
        for (int i = 0; i < 2; i++)
        {
          leftServo.write(120);
          delay(50);
          rightServo.write(130);
          delay(50);
        }
        delay(1000);
        for (int i = 0; i < 2; i++)
        {
          leftServo.write(60);
          delay(50);
          leftServo.write(50);
          delay(50);
        }
      }
      rightServo.write(100);
      leftServo.write(80);
      delay(500);
      for (int i = 0; i < 4; i++)
      {
        for (int i = 0; i < 2; i++)
        {
          rightServo.write(90);
          delay(50);
          rightServo.write(100);
          delay(50);
        }
        delay(1000);
        for (int i = 0; i < 2; i++)
        {
          leftServo.write(90);
          delay(50);
          leftServo.write(80);
          delay(50);
        }
      }
      rightServo.write(rightPosEnd);
      leftServo.write(leftPosStart);
      delay(1000);
      rightServo.write(rightPosStart);
    }
  }
  leftServo.write(leftPosStart);
  rightServo.write(rightPosStart);
}
