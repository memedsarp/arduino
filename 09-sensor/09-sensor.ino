const int echo = 2;
const int trig = 3;

int distance;
long duration;

int check = 0;

int CalculateDistance();
void Beeper(int highDelay, int lowDelay);

void setup() {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);

  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  check = CalculateDistance();
  Serial.println(check);
  if (check > 0)
  {
    Beeper(100, 100);
  }

}

int CalculateDistance()
{
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034/2;
  return distance;
}

void Beeper(int highDelay, int lowDelay)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(highDelay);
  digitalWrite(LED_BUILTIN, LOW);
  delay(lowDelay);
}
