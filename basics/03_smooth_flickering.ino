int const DELAY = 30;
int const LED_OUTPUT = 3;
int const FINAL_DELAY = 1000;

void setup()
{
    pinMode(LED_OUTPUT, OUTPUT);
}

void loop()
{
    for (int brightParameter = 0; brightParameter <= 255; brightParameter++)
    {
        analogWrite(LED_OUTPUT, brightParameter);
        delay(DELAY);
    }

    for (int brightParameter = 255; brightParameter >= 0; brightParameter--)
    {
        analogWrite(LED_OUTPUT, brightParameter);
        delay(DELAY);
    }

    delay(FINAL_DELAY);
}
