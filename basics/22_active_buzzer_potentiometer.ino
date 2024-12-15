const int POTENTIOMETER_PIN = A3;
const int BUZZER_PIN = 8;
const int DELAY = 1000;

void setup()
{
    pinMode(POTENTIOMETER_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    const int potentiometerValue = analogRead(POTENTIOMETER_PIN);
    Serial.println(potentiometerValue);
    if (potentiometerValue > 1000)
    {
        digitalWrite(BUZZER_PIN, HIGH);
    }
    else
    {
        digitalWrite(BUZZER_PIN, LOW);
    }
    delay(DELAY);
}
