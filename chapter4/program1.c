#include <stdio.h>

int reverse_number(int number);

int main(void) {
  int input_number;
  
  printf("Enter a number to be reversed: ");
  scanf("%d", &input_number);

  int reversed_number = reverse_number(input_number);
  printf("Reversed: %10d\n", reversed_number);
  
  return 0;
}

int reverse_number(int number) {
  int reversed = 0;

  while(number > 0) {
    reversed *= 10;

    reversed += number % 10;

    number /= 10;
  }  

  return reversed;
}
