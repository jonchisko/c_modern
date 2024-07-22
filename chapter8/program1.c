#include <stdbool.h>
#include <stdio.h>

#define DIGITS 10

int main(void) {
  bool repeated[DIGITS] = {false};

  long input_number;

  printf("Enter a number: ");
  scanf("%ld", &input_number);

  printf("Repeated: ");
  while (input_number > 0) {
    int digit = input_number % 10;

    if (repeated[digit]) {
      printf("%3d", digit);
    } else {
      repeated[digit] = true;
    }

    input_number /= 10;
  }

  printf("\n");

  return 0;
}
