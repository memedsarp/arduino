#define ledPin 10
#define lightSensor A0

int lightRead;
int brightness;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  lightRead = analogRead(lightSensor);
  brightness = 255 - lightRead / 4;

  Serial.println(brightness);
  if (brightness > 100) {
    analogWrite(ledPin, brightness);
  } else
  {
    analogWrite(ledPin, 0);
  }

}
