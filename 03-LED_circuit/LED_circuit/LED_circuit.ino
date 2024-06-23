int pinNum = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinNum, OUTPUT);  // selected pin is initialized
}

void BeepingLED(int highDelay, int lowDelay);

void loop() {
  // put your main code here, to run repeatedly:
  int highDelay = 100;
  int lowDelay = 50;
  BeepingLED(highDelay, lowDelay);
}

void BeepingLED(int highDelay, int lowDelay) {
  digitalWrite(pinNum, HIGH);
  delay(highDelay);
  digitalWrite(pinNum, LOW);
  delay(lowDelay);
}
