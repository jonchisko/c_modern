#include <stdio.h>

int main(void) {
  int number_a, number_b;

  printf("Enter two numbers: ");
  scanf("%d %d", &number_a, &number_b);

  if (number_a < number_b) {
    int tmp = number_a;
    number_a = number_b;
    number_b = tmp;
  }

  if (number_b == 0) {
    printf("GCD is %10d.\n", number_a);
  }

  int remainder = 0;

  do {
    remainder = number_a % number_b;

    int tmp = number_b;
    number_b = remainder;
    number_a = tmp;
  } while (remainder != 0);

  printf("GCD is: %10d.\n", number_a);

  return 0;
}
