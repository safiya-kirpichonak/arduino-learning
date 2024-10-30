const int outputLED = 13;
const int dotDelayTime = 500;
const int wordSeparatorTime = 1000;
const int dashDelayTime = dotDelayTime * 3;

void blink(int output, int time)
{
    digitalWrite(output, HIGH);
    delay(time);
    digitalWrite(output, LOW);
    delay(time);
}

void setup()
{
    pinMode(outputLED, OUTPUT);
}

void loop()
{
    // S
    for (int i = 0; i < 3; i++)
    {
        blink(outputLED, dotDelayTime);
    }

    // O
    for (int i = 0; i < 3; i++)
    {
        blink(outputLED, dashDelayTime);
    }

    // S
    for (int i = 0; i < 3; i++)
    {
        blink(outputLED, dotDelayTime);
    }

    delay(wordSeparatorTime);
}
