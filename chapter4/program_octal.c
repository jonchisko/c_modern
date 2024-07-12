#include <stdio.h>
#include <math.h>

#define BASE 8

int to_octal(int number_base_10);

int main(void) {
  int input_number;

  printf("Enter number in base 10: ");
  scanf("%d", &input_number);

  int number_base_8 = to_octal(input_number);
  printf("In octal base: %10d\n", number_base_8);
  
  return 0;
}

int to_octal(int number_base_10) {
  int number_base_8 = 0;
  int position = 0;

  while(number_base_10 > 0) {
    number_base_8 += (number_base_10 % BASE) * (int) pow(10, position);
    number_base_10 /= BASE;

    position++;
  }

  return number_base_8;
}
