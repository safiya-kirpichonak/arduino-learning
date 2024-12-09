const int LED_PIN = 7;
const int DELAY_TIME = 1000;
const int POTENTIOMETER_PIN = A0;

void setup()
{
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    pinMode(POTENTIOMETER_PIN, INPUT);
}

void loop()
{
    int potentiometerValue = analogRead(POTENTIOMETER_PIN);
    Serial.println(potentiometerValue);
    delay(DELAY_TIME);

    while (potentiometerValue > 1000)
    {
        digitalWrite(LED_PIN, HIGH);
        Serial.println("WARNING! VOLTAGE IS HIGH!");
        potentiometerValue = analogRead(POTENTIOMETER_PIN);
        Serial.println(potentiometerValue);
        delay(DELAY_TIME);
    }

    digitalWrite(LED_PIN, LOW);
}
