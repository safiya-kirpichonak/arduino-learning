const int PD_PIN = A0;
const int DELAY_TIME = 250;

void setup()
{
    pinMode(PD_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int light = analogRead(PD_PIN);
    Serial.println(light);
    delay(DELAY_TIME);
}
