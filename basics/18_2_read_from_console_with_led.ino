const int RED_PIN = 12;
const int DELAY_TIME = 1000;

void setup()
{
    Serial.begin(9600);
    pinMode(RED_PIN, OUTPUT);
}

void loop()
{
    Serial.println("Please enter count of blinks: ");
    while (Serial.available() == 0)
    {
    }
    const int blinksCount = Serial.parseInt();
    while (Serial.available() > 0)
    {
        Serial.read();
    }

    for (int i = 0; i < blinksCount; i++)
    {
        digitalWrite(RED_PIN, HIGH);
        delay(DELAY_TIME);
        digitalWrite(RED_PIN, LOW);
        delay(DELAY_TIME);
    }
}
