const int BUZZER_PIN = 8;
const int DELAY = 2000;

void setup()
{
    pinMode(BUZZER_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Please, write your number, but not more than 10!");
    while (Serial.available() == 0)
    {
    }
    const int n = Serial.parseInt();
    if (n > 10)
    {
        digitalWrite(BUZZER_PIN, HIGH);
        delay(DELAY);
        digitalWrite(BUZZER_PIN, LOW);
    }
    else
    {
        Serial.println(n);
    }
}
