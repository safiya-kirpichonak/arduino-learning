const int POTENTIOMETER_PIN = A2;
const int LED_PIN = 11;
int potentiometerValue = 0;
float ledValue = 0;

void setup()
{
    pinMode(POTENTIOMETER_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    potentiometerValue = analogRead(POTENTIOMETER_PIN);
    ledValue = (255. / 1023.) * potentiometerValue;
    analogWrite(LED_PIN, ledValue);
    Serial.println(ledValue);
}
