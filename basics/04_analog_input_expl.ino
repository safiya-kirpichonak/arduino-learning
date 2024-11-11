float V2 = 0;
int const DELAY_TIME = 500;
int const READ_PIN = A3;

void setup()
{
    pinMode(READ_PIN, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int readValue = analogRead(READ_PIN);
    V2 = (5. / 1023.) * readValue;
    Serial.println(V2);
    delay(DELAY_TIME);
}
