void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void Beeper(int highDelay, int lowDelay);

void loop() {
  // put your main code here, to run repeatedly:
  int highDelay = 100;  // high volt time
  int lowDelay = 100;   // low volt time
  Beeper(highDelay, lowDelay);
}

void Beeper(int highDelay, int lowDelay)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(highDelay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(lowDelay);
}
