#define potPin A0
#define ledPin 3 

int val = 0;
int brightness;
double volt = 0;

void setup() {

  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Sistem başlatıldı");

}

void loop() {
  
  val = analogRead(potPin);
  volt = 5.0/1024*val;
  brightness = map(val, 0, 1023, 0, 255);

  Serial.println(volt);
  analogWrite(ledPin, brightness);
  delay(100);

}
