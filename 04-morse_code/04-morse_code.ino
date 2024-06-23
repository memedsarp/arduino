int pinNum = 3;

void setup() {
  pinMode(pinNum, OUTPUT);
  Serial.begin(9600);
}

int morseShort = 200;
int morseLong = 400;
int lowV = 200;

void Letter(char letter);
void Morse(int arr[], int num);

char sentence[] = "sarp solakoglu";
int n = sizeof(sentence) / sizeof(sentence[0]);

void loop() {

  for(int i=0; i<n; i++) {
    Letter(sentence[i]);
    delay(lowV);
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
    case 'C':
      arr = calloc(4, sizeof(int));
      arr[0] = 1;
      arr[1] = 0;
      arr[2] = 1;
      arr[3] = 0;
      Morse(arr, 4);
      free(arr);
      break;
    case 'D':
      arr = calloc(3, sizeof(int));
      arr[0] = 1;
      arr[1] = 0;
      arr[2] = 0;
      Morse(arr, 3);
      free(arr);
      break;
    case 'E':
      arr = calloc(1, sizeof(int));
      arr[0] = 1;
      Morse(arr, 1);
      free(arr);
      break;
    case 'F':
      arr = calloc(4, sizeof(int));
      arr[0] = 0;
      arr[1] = 0;
      arr[2] = 1;
      arr[3] = 0;
      Morse(arr, 4);
      free(arr);
      break;
    case 'G':
      arr = calloc(3, sizeof(int));
      arr[0] = 1;
      arr[1] = 1;
      arr[2] = 0;
      Morse(arr, 3);
      free(arr);
      break;
    case 'H':
      arr = calloc(4, sizeof(int));
      arr[0] = 0;
      arr[1] = 0;
      arr[2] = 0;
      arr[3] = 0;
      Morse(arr, 4);
      free(arr);
      break;
    case 'I':
      arr = calloc(2, sizeof(int));
      arr[0] = 0;
      arr[1] = 0;
      Morse(arr, 2);
      free(arr);
      break;
    case 'J':
      arr = calloc(4, sizeof(int));
      arr[0] = 0;
      arr[1] = 1;
      arr[2] = 1;
      arr[3] = 1;
      Morse(arr, 4);
      free(arr);
      break;
    case 'K':
      arr = calloc(3, sizeof(int));
      arr[0] = 1;
      arr[1] = 0;
      arr[2] = 1;
      Morse(arr, 3);
      free(arr);
      break;
    case 'L':
      arr = calloc(4, sizeof(int));
      arr[0] = 0;
      arr[1] = 1;
      arr[2] = 0;
      arr[3] = 0;
      Morse(arr, 4);
      free(arr);
      break;
    case 'M':
      arr = calloc(2, sizeof(int));
      arr[0] = 1;
      arr[1] = 1;
      Morse(arr, 2);
      free(arr);
      break;
    case 'N':
      arr = calloc(2, sizeof(int));
      arr[0] = 1;
      arr[1] = 0;
      Morse(arr, 2);
      free(arr);
      break;
    case 'O':
      arr = calloc(3, sizeof(int));
      arr[0] = 1;
      arr[1] = 1;
      arr[2] = 1;
      Morse(arr, 3);
      free(arr);
      break;
    case 'P':
      arr = calloc(4, sizeof(int));
      arr[0] = 0;
      arr[1] = 1;
      arr[2] = 1;
      arr[3] = 0;
      Morse(arr, 4);
      free(arr);
      break;
    case 'Q':
      arr = calloc(4, sizeof(int));
      arr[0] = 1;
      arr[1] = 1;
      arr[2] = 0;
      arr[3] = 1;
      Morse(arr, 4);
      free(arr);
      break;
    case 'R':
      arr = calloc(3, sizeof(int));
      arr[0] = 0;
      arr[1] = 1;
      arr[2] = 0;
      Morse(arr, 3);
      free(arr);
      break;
    case 'S':
      arr = calloc(3, sizeof(int));
      arr[0] = 0;
      arr[1] = 0;
      arr[2] = 0;
      Morse(arr, 3);
      free(arr);
      break;
    case 'T':
      arr = calloc(1, sizeof(int));
      arr[0] = 1;
      Morse(arr, 1);
      free(arr);
      break;
    case 'U':
      arr = calloc(3, sizeof(int));
      arr[0] = 0;
      arr[1] = 0;
      arr[2] = 1;
      Morse(arr, 3);
      free(arr);
      break;
    case 'V':
      arr = calloc(4, sizeof(int));
      arr[0] = 0;
      arr[1] = 0;
      arr[2] = 0;
      arr[3] = 1;
      Morse(arr, 4);
      free(arr);
      break;
    case 'W':
      arr = calloc(3, sizeof(int));
      arr[0] = 0;
      arr[1] = 1;
      arr[2] = 1;
      Morse(arr, 3);
      free(arr);
      break;
    case 'X':
      arr = calloc(4, sizeof(int));
      arr[0] = 1;
      arr[1] = 0;
      arr[2] = 0;
      arr[3] = 1;
      Morse(arr, 4);
      free(arr);
      break;
    case 'Y':
      arr = calloc(4, sizeof(int));
      arr[0] = 1;
      arr[1] = 0;
      arr[2] = 1;
      arr[3] = 1;
      Morse(arr, 4);
      free(arr);
      break;
    case 'Z':
      arr = calloc(4, sizeof(int));
      arr[0] = 1;
      arr[1] = 1;
      arr[2] = 0;
      arr[3] = 0;
      Morse(arr, 4);
      free(arr);
      break;
    default:
      delay(lowV);
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

