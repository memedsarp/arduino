# define potPin A0

int val = 0;

void setup() {

  Serial.begin(9600);
  Serial.println("Sistem başlatıldı");

}

void loop() {
  
  val = analogRead(potPin);
  delay(1000);
  Serial.println(val);

}
