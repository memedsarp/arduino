const int ledPin = 3;
const int buttonPin = 2;
int lightSwitch = 0;

void SwitchToogle(int lightSwitch);

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

  if (!digitalRead(buttonPin))
  { 
    lightSwitch = (lightSwitch + 1) % 2;
    SwitchToggle(lightSwitch);
  }
 
}

void SwitchToggle(int lightSwitch)
{
  if(lightSwitch)
  {
    while(!digitalRead(buttonPin)){
      digitalWrite(ledPin, HIGH);
    }

  } else
  {
    while(!digitalRead(buttonPin)){
      digitalWrite(ledPin, LOW);
    }
  }
}


