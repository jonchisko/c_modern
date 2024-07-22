#include <stdio.h>

#define N_DIGITS 10

int main(void) {
  long int input_number;
  unsigned short repeated_counter[N_DIGITS] = {0};

  for (;;) {
    printf("Enter number [enter 0 or less to quit]: ");
    scanf("%ld", &input_number);

    if (input_number <= 0)
      break;

    while (input_number > 0) {
      unsigned short digit = input_number % 10;
      repeated_counter[digit]++;

      input_number /= 10;
    }

    printf("%-15s", "Digits: ");
    for (int i = 0; i < N_DIGITS; i++) {
      printf("%3d", i);
    }

    printf("\n");
    printf("%-15s", "Repeated: ");
    for (int i = 0; i < N_DIGITS; i++) {
      printf("%3d", repeated_counter[i]);
    }

    printf("\n");

    for (int i = 0; i < N_DIGITS; i++) {
      repeated_counter[i] = 0;
    }
  }
}
