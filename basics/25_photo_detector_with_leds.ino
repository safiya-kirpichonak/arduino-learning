const int PD_PIN = A0;
const int LED1_PIN = 9;
const int LED2_PIN = 8;
const int DELAY_TIME = 250;

void setup()
{
    pinMode(LED1_PIN, OUTPUT);
    pinMode(LED2_PIN, OUTPUT);
    pinMode(PD_PIN, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int light = analogRead(PD_PIN);
    if (light > 350)
    {
        digitalWrite(LED1_PIN, HIGH);
        digitalWrite(LED2_PIN, LOW);
    }
    else
    {
        digitalWrite(LED1_PIN, LOW);
        digitalWrite(LED2_PIN, HIGH);
    }

    Serial.println(light);
    delay(DELAY_TIME);
}
