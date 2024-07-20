#include <ctype.h>
#include <stdio.h>

unsigned char character_to_number(char ch);

int main(void) {
  unsigned int score = 0;
  char c;

  printf("Enter a word: ");
  while((c = getchar()) != '\n') {
    score += character_to_number(c);
  }

  printf("%10u\n", score);

  return 0;
}

unsigned char character_to_number(char ch) {
  unsigned char upper = (unsigned char) toupper((int)ch);

  switch (upper) {
  case 'A':
  case 'E':
  case 'I':
  case 'L':
  case 'N':
  case 'O':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
    return 1;
  case 'D':
  case 'G':
    return 2;
  case 'B':
  case 'C':
  case 'M':
  case 'P':
    return 3;
  case 'F':
  case 'H':
  case 'V':
  case 'W':
  case 'Y':
    return 4;
  case 'K':
    return 5;
  case 'J':
  case 'X':
    return 8;
  case 'Q':
  case 'Z':
    return 10;
  default:
    return 0;
  }
}
