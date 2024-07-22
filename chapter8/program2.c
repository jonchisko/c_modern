#include <stdio.h>

#define N_DIGITS 10

int main(void) {
  long int input_number;
  short int repeated_counter[N_DIGITS] = {0};

  printf("Enter number: ");
  scanf("%ld", &input_number);

  while (input_number > 0) {
    int digit = input_number % 10;

    repeated_counter[digit]++;
    input_number /= 10;
  }

  printf("%-15s", "Digit:");

  for (int i = 0; i < N_DIGITS; i++) {
    printf("%5d", i);
  }

  printf("\n");
  printf("%-15s", "Occurences:");

  for (int i = 0; i < N_DIGITS; i++) {
    printf("%5d", repeated_counter[i]);
  }

  printf("\n");

  return 0;
}
