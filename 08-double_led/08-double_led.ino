const int led1 = 3;
const int led2 = 4;
const int buttonPin = 2;

int ledNums = 0;

void Switch(int ledNums);

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (!digitalRead(buttonPin))
  {
    ledNums = (ledNums + 1) % 4;
    Switch(ledNums);
  } 
}

void Switch(int ledNums)
{
  if (ledNums == 0)
  {
    while (!digitalRead(buttonPin))
    {
      Serial.println("Hello");
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
    }
  } else if (ledNums == 1)
  {
    while (!digitalRead(buttonPin))
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
    }
  } else if (ledNums == 2)
  {
    while (!digitalRead(buttonPin))
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
    }
  } else
  {
    while (!digitalRead(buttonPin))
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
    }
  }
}
