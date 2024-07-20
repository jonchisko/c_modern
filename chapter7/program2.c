#include <stdio.h>

#define CONTINUE_POINT 24

void clear_stdin();

int main(void) {
  int number_of_squares;
  printf("How many squares do you want printed? ");
  scanf("%d", &number_of_squares);

  clear_stdin();

  for (int i = 1; i <= number_of_squares; i++) {
    if (i % (CONTINUE_POINT + 1) == 0) {
      printf("Press Enter to continue ...\n");
      while (getchar() != '\n')
        ;
    }
    printf("%-5d|%5d\n", i, i * i);
  }

  return 0;
}

void clear_stdin() {
  int c; // not char, because EOF is usually larger than char supports

  do {
    c = getchar();
  } while (c != EOF && c != '\n');
}
