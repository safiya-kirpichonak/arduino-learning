const int LED_PIN = 8;
const int BUTTON_PIN = 12;
const int DELAY_TIME = 100;

void setup()
{
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
}

void loop()
{
    const int buttonValue = digitalRead(BUTTON_PIN);
    Serial.println(buttonValue);
    if (buttonValue == 0)
    {
        digitalWrite(LED_PIN, HIGH);
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
    }
    delay(DELAY_TIME);
}
