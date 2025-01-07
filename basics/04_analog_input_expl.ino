int const READ_PIN = A3;
int const DELAY_TIME = 500;

void setup()
{
    pinMode(READ_PIN, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int readValue = analogRead(READ_PIN); // from 0 to 1023
    float V2 = (5. / 1023.) * readValue;  // real voltage from analog signal
    Serial.println(V2);
    delay(DELAY_TIME);
}
