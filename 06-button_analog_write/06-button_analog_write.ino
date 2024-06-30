const int ledPin = 3;
const int buttonPin = 2;
int lightSwitch = 1;

void SwitchToogle();

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

  if (!digitalRead(buttonPin))
  {
    SwitchToggle();
  }
 
}

void SwitchToggle()
{
  if(lightSwitch == 1)
  {
    lightSwitch = 0;
    digitalWrite(ledPin, HIGH);
    while(!digitalRead(buttonPin)){
    }

  } else
  {
    lightSwitch = 1;
    digitalWrite(ledPin, LOW);
    while(!digitalRead(buttonPin)){
    }
  }
}


