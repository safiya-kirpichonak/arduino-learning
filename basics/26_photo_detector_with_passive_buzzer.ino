const int PD_PIN = A0;
const int BUZZER_PIN = 8;

void setup()
{
    Serial.begin(9600);
    pinMode(PD_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
    const int light = analogRead(PD_PIN);
    const int delayTime = (9. / 550.) * light - (9. * 200.) / 550. + 1.;

    Serial.print("Light: ");
    Serial.print(light);
    Serial.println();
    Serial.print("Delay: ");
    Serial.print(delayTime);
    Serial.println();

    digitalWrite(BUZZER_PIN, HIGH);
    delay(delayTime);
    digitalWrite(BUZZER_PIN, LOW);
    delay(delayTime);
}
