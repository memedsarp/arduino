const int ledPin = 3;
const int buttonPin = 2;

int status[] = {0, 1};
int currentStatus = 0;

int dimStatus = 0;


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}


void Dimmer(int currentStatus);

void loop() {
  if (!digitalRead(buttonPin)) {
    currentStatus = status[(currentStatus + 1) % 2];
    Dimmer(currentStatus);
  }
}

void Dimmer(int currentStatus)
{
  if (currentStatus == 1)
  {
    while (dimStatus <= 255 && !digitalRead(buttonPin))
    {
      dimStatus += 5;
      analogWrite(ledPin, dimStatus);
      delay(50);
    }
  } else
  {
    while (dimStatus >= 0 && !digitalRead(buttonPin))
    {
      dimStatus -= 5;
      analogWrite(ledPin, dimStatus);
      delay(50);
    }
  }
}
