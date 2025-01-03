// Initially: `LEDState = 0` (off), `lastButtonValue = 1` (not pressed).
// I pressed the button: `LEDState = 1` (on), `lastButtonValue = 0` (pressed).
// Next loop: `LEDState = 1` (on), `lastButtonValue = 1` (not pressed).
// I pressed the button: `LEDState = 0` (off), `lastButtonValue = 0` (pressed).
// Next loop: `LEDState = 0` (off), `lastButtonValue = 1` (not pressed).
// I pressed and held the button: `LEDState = 1` (on), `lastButtonValue = 0` (pressed).
// Next loop: `LEDState = 1` (on), `lastButtonValue = 0` (pressed).
// Next loop: `LEDState = 1` (on), `lastButtonValue = 0` (pressed).
// Next loop: `LEDState = 1` (on), `lastButtonValue = 0` (pressed).
// I released the button: `LEDState = 1` (on), `lastButtonValue = 1` (not pressed).
// I pressed the button: `LEDState = 0` (off), `lastButtonValue = 0` (pressed).

const int LED_PIN = 8;
const int BUTTON_PIN = 12;
const int DELAY_TIME = 100;

int LEDState = 0;
int lastButtonValue = 1;

void setup()
{
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);
}

void loop()
{
    int buttonValue = digitalRead(BUTTON_PIN);
    Serial.println(buttonValue);

    if (buttonValue == 0 && lastButtonValue == 1)
    {
        LEDState = !LEDState;
    }

    lastButtonValue = buttonValue;
    digitalWrite(LED_PIN, LEDState);

    delay(DELAY_TIME);
}
