const int BLUE_PIN = 11;
const int GREEN_PIN = 12;
const int RED_PIN = 13;

void setup()
{
    Serial.begin(9600);
    pinMode(BLUE_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(RED_PIN, OUTPUT);
}

void loop()
{
    Serial.println("Hello! What color do you want (blue/green/red/aqua/off)?");
    while (Serial.available() == 0)
    {
    };
    String color = Serial.readString();
    color.trim();

    if (color == "blue")
    {
        digitalWrite(BLUE_PIN, HIGH);
        digitalWrite(GREEN_PIN, LOW);
        digitalWrite(RED_PIN, LOW);
    }
    else if (color == "green")
    {
        digitalWrite(BLUE_PIN, LOW);
        digitalWrite(GREEN_PIN, HIGH);
        digitalWrite(RED_PIN, LOW);
    }
    else if (color == "red")
    {
        digitalWrite(BLUE_PIN, LOW);
        digitalWrite(GREEN_PIN, LOW);
        digitalWrite(RED_PIN, HIGH);
    }
    else if (color == "off")
    {
        digitalWrite(BLUE_PIN, LOW);
        digitalWrite(GREEN_PIN, LOW);
        digitalWrite(RED_PIN, LOW);
    }
    else if (color == "aqua")
    {
        analogWrite(BLUE_PIN, 80);
        analogWrite(GREEN_PIN, 255);
        digitalWrite(RED_PIN, LOW);
    }
    else
    {
        Serial.println("Error! Unknown color!");
        digitalWrite(BLUE_PIN, LOW);
        digitalWrite(GREEN_PIN, LOW);
        digitalWrite(RED_PIN, LOW);
    }
}
