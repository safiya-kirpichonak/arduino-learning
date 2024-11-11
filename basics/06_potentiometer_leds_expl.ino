// general settings
const int DELAY_TIME = 1000;
const int MAX_VOLT = 4.0;
const int WARNING_VOLT = 3.0;

// potentiometer settings
const int VOLT_PIN = A2;
int dataFromVoltPin;
float actualVolt;

// LEDs settings
const int RED_LED_PIN = 6;
const int GREEN_LED_PIN = 3;
const int YELLOW_LED_PIN = 5;

void setup()
{
    Serial.begin(9600);
    pinMode(VOLT_PIN, INPUT);
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(YELLOW_LED_PIN, OUTPUT);
}

void loop()
{
    dataFromVoltPin = analogRead(VOLT_PIN);
    actualVolt = (5. / 1023.) * dataFromVoltPin;
    Serial.println(actualVolt);

    if (actualVolt > MAX_VOLT)
    {
        digitalWrite(RED_LED_PIN, HIGH);
        digitalWrite(YELLOW_LED_PIN, LOW);
        digitalWrite(GREEN_LED_PIN, LOW);
    }
    else if (actualVolt < MAX_VOLT && actualVolt > WARNING_VOLT)
    {
        digitalWrite(RED_LED_PIN, LOW);
        digitalWrite(YELLOW_LED_PIN, HIGH);
        digitalWrite(GREEN_LED_PIN, LOW);
    }
    else
    {
        digitalWrite(RED_LED_PIN, LOW);
        digitalWrite(YELLOW_LED_PIN, LOW);
        digitalWrite(GREEN_LED_PIN, HIGH);
    }

    delay(DELAY_TIME);
}