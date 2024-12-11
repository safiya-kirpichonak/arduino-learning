const int RED_LED_OUTPUT = 13;
const int GREEN_LED_OUTPUT = 12;

void setup()
{
    Serial.begin(9600);
    pinMode(RED_LED_OUTPUT, OUTPUT);
    pinMode(GREEN_LED_OUTPUT, OUTPUT);
}

void loop()
{
    Serial.println("Hello! What is your favorite color (green/red)?");
    while (Serial.available() == 0)
    {
    }

    String color = Serial.readString();
    color.trim();

    if (color == "green")
    {
        digitalWrite(RED_LED_OUTPUT, LOW);
        digitalWrite(GREEN_LED_OUTPUT, HIGH);
    }
    else if (color == "red")
    {
        digitalWrite(GREEN_LED_OUTPUT, LOW);
        digitalWrite(RED_LED_OUTPUT, HIGH);
    }
    else
    {
        Serial.println("Error! Unknown color!");
        digitalWrite(GREEN_LED_OUTPUT, LOW);
        digitalWrite(RED_LED_OUTPUT, LOW);
    }
}
