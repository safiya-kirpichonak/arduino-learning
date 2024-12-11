void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Hello! What is your name?");
    while (Serial.available() == 0)
    {
    }

    String name = Serial.readString();
    name.trim();

    Serial.print("Hello, ");
    Serial.print(name);
    Serial.println("! This is Arduino!");
}
