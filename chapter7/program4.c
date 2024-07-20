#include <stdio.h>

void character_to_number(char character);

int main(void) {

  printf("Enter a phone number: ");
  char c;
  while ((c = getchar()) != '\n') {
    character_to_number(c);
  }

  printf("\n");
}

void character_to_number(char character) {
  // we can assume, character is always upper case!
  if (character < 'A' || character > 'Z') {
    printf("%c", character);
    return;
  }

  switch (character) {
  case 'A':
  case 'B':
  case 'C':
    printf("2");
    break;
  case 'D':
  case 'E':
  case 'F':
    printf("3");
    break;
  case 'G':
  case 'H':
  case 'I':
    printf("4");
    break;
  case 'J':
  case 'K':
  case 'L':
    printf("5");
    break;
  case 'M':
  case 'N':
  case 'O':
    printf("6");
    break;
  case 'P':
  case 'R':
  case 'S':
    printf("7");
    break;
  case 'T':
  case 'U':
  case 'V':
    printf("8");
    break;
  case 'W':
  case 'X':
  case 'Y':
    printf("9");
    break;
  default:
    printf("This character is not present.");
  }
}
