const int ledPin = 3;
const int buttonPin = 2;
int buttonState = 1;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void SwitchToogle();

void loop() {

  if (!digitalRead(buttonPin))
  {
    SwitchToggle();
  }
 
}

void SwitchToggle()
{
  if(buttonState == 1)
  {
    buttonState = 0;
    digitalWrite(ledPin, HIGH);
    
  } else
  {
    buttonState = 1;
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}


