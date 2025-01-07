// LED settings
const int LED_PIN = 9;
int ledLightValue = 0;
// buttons settings
const int PLUS_BUTTON_PIN = 13;
const int MINUS_BUTTON_PIN = 12;
// buzzer settings
const int BUZZER_PIN = 8;
const int BUZZER_TIME = 1000;

void setup()
{
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(PLUS_BUTTON_PIN, INPUT);
    pinMode(MINUS_BUTTON_PIN, INPUT);
}

void loop()
{
    int plusButtonValue = digitalRead(PLUS_BUTTON_PIN);
    int minusButtonValue = digitalRead(MINUS_BUTTON_PIN);

    if (plusButtonValue == 0)
    {
        if (ledLightValue != 255)
        {
            ledLightValue += 5;
            analogWrite(LED_PIN, ledLightValue);
        }
        else
        {
            Serial.println("You can't do more light!");
            digitalWrite(BUZZER_PIN, HIGH);
            delay(BUZZER_TIME);
            digitalWrite(BUZZER_PIN, LOW);
        }
    }

    if (minusButtonValue == 0)
    {
        if (ledLightValue != 0)
        {
            ledLightValue -= 5;
            analogWrite(LED_PIN, ledLightValue);
        }
        else
        {
            Serial.println("You can't do less light!");
            digitalWrite(BUZZER_PIN, HIGH);
            delay(BUZZER_TIME);
            digitalWrite(BUZZER_PIN, LOW);
        }
    }
}
