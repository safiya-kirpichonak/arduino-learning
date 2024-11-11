const int OUTPUT_LED = 13;
const int DOT_DELAY_TIME = 500;
const int WORD_SEPARATOR_TIME = 1000;
const int DASH_DELAY_TIME = DOT_DELAY_TIME * 3;

void blink(int output, int time)
{
    digitalWrite(output, HIGH);
    delay(time);
    digitalWrite(output, LOW);
    delay(time);
}

void setup()
{
    pinMode(OUTPUT_LED, OUTPUT);
}

void loop()
{
    // S
    for (int i = 0; i < 3; i++)
    {
        blink(OUTPUT_LED, DOT_DELAY_TIME);
    }

    // O
    for (int i = 0; i < 3; i++)
    {
        blink(OUTPUT_LED, DASH_DELAY_TIME);
    }

    // S
    for (int i = 0; i < 3; i++)
    {
        blink(OUTPUT_LED, DOT_DELAY_TIME);
    }

    delay(WORD_SEPARATOR_TIME);
}
