const int DELAY = 1000;
const int LEED_OUTPUT_1 = 5;
const int LEED_OUTPUT_2 = 4;
const int LEED_OUTPUT_4 = 3;
const int LEED_OUTPUT_8 = 2;

void blink(int state8, int state4, int state2, int state1)
{
    digitalWrite(LEED_OUTPUT_1, state1);
    digitalWrite(LEED_OUTPUT_2, state2);
    digitalWrite(LEED_OUTPUT_4, state4);
    digitalWrite(LEED_OUTPUT_8, state8);
    delay(DELAY);
}

void setup()
{
    pinMode(LEED_OUTPUT_1, OUTPUT);
    pinMode(LEED_OUTPUT_2, OUTPUT);
    pinMode(LEED_OUTPUT_4, OUTPUT);
    pinMode(LEED_OUTPUT_8, OUTPUT);
}

void loop()
{
    blink(LOW, LOW, LOW, LOW);     // 0
    blink(LOW, LOW, LOW, HIGH);    // 1
    blink(LOW, LOW, HIGH, LOW);    // 2
    blink(LOW, LOW, HIGH, HIGH);   // 3
    blink(LOW, HIGH, LOW, LOW);    // 4
    blink(LOW, HIGH, LOW, HIGH);   // 5
    blink(LOW, HIGH, HIGH, LOW);   // 6
    blink(LOW, HIGH, HIGH, HIGH);  // 7
    blink(HIGH, LOW, LOW, LOW);    // 8
    blink(HIGH, LOW, LOW, HIGH);   // 9
    blink(HIGH, LOW, HIGH, LOW);   // 10
    blink(HIGH, LOW, HIGH, HIGH);  // 11
    blink(HIGH, HIGH, LOW, LOW);   // 12
    blink(HIGH, HIGH, LOW, HIGH);  // 13
    blink(HIGH, HIGH, HIGH, LOW);  // 14
    blink(HIGH, HIGH, HIGH, HIGH); // 15
}
