const int DELAY_TIME = 500;
const int POTENTIOMETER_PIN = A2;
const int LED_PIN = 11;
int potValue = 0;

void setup()
{
    pinMode(RED_PIN, OUTPUT);
    pinMode(YELLOW_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(YELLOW_PIN, HIGH);
        delay(YELLOW_TIME);
        digitalWrite(YELLOW_PIN, LOW);
        delay(YELLOW_TIME);
    }

    for (int i = 0; i < 5; i++)
    {
        digitalWrite(RED_PIN, HIGH);
        delay(RED_TIME);
        digitalWrite(RED_PIN, LOW);
        delay(RED_TIME);
    }
}
