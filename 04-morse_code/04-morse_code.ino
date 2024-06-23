int pinNum = 4;

void setup() {
  pinMode(pinNum, OUTPUT);
  Serial.begin(9600);
}

int morseShort = 200;
int morseLong = 400;
int lowV = 200;

void Letter(char letter);
void Morse(int arr[], int num);

char sentence[] = "AB";
int n = sizeof(sentence) / sizeof(sentence[0]);

void loop() {

  for(int i=0; i<n; i++) {
    Letter(sentence[i]);
  }


}

void Letter(char letter)
{
  letter = toUpperCase(letter);
  printf("%c", letter);
  int* arr;
  switch (letter)
  {
    case 'A':
      arr = calloc(2, sizeof(int));
      arr[0] = 0;
      arr[1] = 1;
      Morse(arr, 2);
      free(arr);
      break;
    case 'B':
      arr = calloc(4, sizeof(int));
      arr[0] = 1;
      arr[1] = 0;
      arr[2] = 0;
      arr[3] = 0;
      Morse(arr, 4);
      free(arr);
      break;
  }
}

void Morse(int arr[], int num)
{
  for(int i=0; i<num; i++)
  {
    if (arr[i] == 0)
    {
      digitalWrite(pinNum, HIGH);
      delay(morseShort);
      digitalWrite(pinNum, LOW);
      delay(lowV);
    } else
    {
      digitalWrite(pinNum, HIGH);
      delay(morseLong);
      digitalWrite(pinNum, LOW);
      delay(lowV);
    }
  }
}

