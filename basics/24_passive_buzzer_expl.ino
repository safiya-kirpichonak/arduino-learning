const int BUZZER_PIN = 8;
const int BUZZER_TIME = 1000;

void setup()
{
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
  digitalWrite(BUZZER_PIN, HIGH);
  delayMicroseconds(BUZZER_TIME);
  digitalWrite(BUZZER_PIN, LOW);
  delayMicroseconds(BUZZER_TIME);
}
