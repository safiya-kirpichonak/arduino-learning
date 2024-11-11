const int DELAY_TIME = 1000;
const int VOLT_PIN = A4;
int dataFromVoltPin;
float actualVolt;

void setup()
{
    Serial.begin(9600);
    pinMode(VOLT_PIN, INPUT);
}

void loop()
{
    dataFromVoltPin = analogRead(VOLT_PIN);
    actualVolt = (5. / 1023.) * dataFromVoltPin;
    Serial.println(actualVolt);
    delay(DELAY_TIME);
}