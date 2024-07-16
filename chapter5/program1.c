#include <stdio.h>

int main(void) {
  // program assumes non-negative integers
  int number;
  printf("Enter number: ");
  scanf("%d", &number);

  if (number < 10) {
    printf("The number has 1 digit.\n");
  } else if (number < 100) {
    printf("The number has 2 digits.\n");
  } else if (number < 1000) {
    printf("The number has 3 digits.\n");
  } else {
    printf("The number has more than 4 digits.\n");
  }

  return 0;
}
