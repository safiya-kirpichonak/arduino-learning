#include <Servo.h>

const int SERVO_PIN = 9;
Servo servo;

void setup()
{
    Serial.begin(9600);
    servo.attach(SERVO_PIN);
}

void loop()
{
    Serial.println("Please enter servo angle (0 - 180):");
    while (Serial.available() == 0)
    {
    }

    const int myNumber = Serial.parseInt();
    while (Serial.available() > 0)
    {
        Serial.read();
    }

    if (myNumber >= 0 && myNumber <= 180)
    {
        servo.write(myNumber);
    }
    else
    {
        Serial.println("Incorrect servo position angle.");
    }
}
