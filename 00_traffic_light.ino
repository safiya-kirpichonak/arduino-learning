const int TIME = 1000;
const int RED_LED_OUTPUT = 2;
const int GREEN_LED_OUTPUT = 4;
const int YELLOW_LED_OUTPUT = 3;

void setup()
{
    pinMode(RED_LED_OUTPUT, OUTPUT);
    pinMode(GREEN_LED_OUTPUT, OUTPUT);
    pinMode(YELLOW_LED_OUTPUT, OUTPUT);
}

void loop()
{
    digitalWrite(RED_LED_OUTPUT, HIGH);
    delay(TIME);
    digitalWrite(RED_LED_OUTPUT, LOW);
    delay(TIME);

    digitalWrite(YELLOW_LED_OUTPUT, HIGH);
    delay(TIME);
    digitalWrite(YELLOW_LED_OUTPUT, LOW);
    delay(TIME);

    digitalWrite(GREEN_LED_OUTPUT, HIGH);
    delay(TIME);
    digitalWrite(GREEN_LED_OUTPUT, LOW);
    delay(TIME);
}