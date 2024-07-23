#include <stdio.h>

#define BUFFER_SIZE 256

int main(void) {
  char buffer[BUFFER_SIZE];

  char input;
  char punctuation;
  int i = 0;

  while ((input = getchar()) && input != '.' && input != '!' && input != '?' &&
         i < BUFFER_SIZE) {
    buffer[i++] = input;
  }

  punctuation = input;

  int end_word = -1;
  for (int j = i - 1; j >= 0; j--) {
    char letter = buffer[j];
    if (letter != ' ' && end_word == -1) {
      end_word = j;
    } else if (letter == ' ') {
      for (int k = j + 1; k <= end_word; k++) {
        printf("%c", buffer[k]);
      }
      printf(" ");
      end_word = -1;
    }
  }

  for (int k = 0; k <= end_word; k++) {
    printf("%c", buffer[k]);
  }
  printf("%c", punctuation);
  printf("\n");

  return 0;
}
