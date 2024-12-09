void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Please enter your Number: ");
    while (Serial.available() == 0)
    {
    }

    const int myNumber = Serial.parseInt();
    while (Serial.available() > 0)
    {
        Serial.read();
    }

    Serial.print("Your number: ");
    Serial.println(myNumber);
}
