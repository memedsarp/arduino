const int pinNum = 3;
int brightness = 0;
const int fadeAmount = 2;
const int delayTime = 20;

void setup() {
  pinMode(pinNum, OUTPUT);
}

void loop() {
  
  while (brightness <= 255)
  {
    brightness += fadeAmount;
    analogWrite(pinNum, brightness);
    delay(delayTime);
  } 
  while (brightness >= 0)
  {
    brightness -= fadeAmount;
    analogWrite(pinNum, brightness);
    delay(delayTime);
  }
}
