const int BUZZER_PIN = 8;
const int POTENTIOMETER_PIN = A4;

void setup()
{
    Serial.begin(9600);
    pinMode(POTENTIOMETER_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
    int potentiometerVoltage = analogRead(POTENTIOMETER_PIN);
    // int buzzerTime = (1000. / 1023.) * potentiometerVoltage; // if buzzerTime is between 0 and 1.000
    int buzzerTime = (9940. / 1023.) * potentiometerVoltage + 60; // if buzzerTime is between 60 and 10.000
    Serial.println("Voltage: " + String(potentiometerVoltage) + ", Buzzer Time: " + String(buzzerTime));
    digitalWrite(BUZZER_PIN, HIGH);
    delayMicroseconds(buzzerTime);
    digitalWrite(BUZZER_PIN, LOW);
    delayMicroseconds(buzzerTime);
}
