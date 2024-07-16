#include <stdio.h>

int main(void) {
  float input;
  float largest = 0;
  do {
    printf("Enter a number: ");
    scanf("%f", &input);
    
    if (input > largest) {
      largest = input;
    }
  } while (input > 0);

  if (largest > 0) 
    printf("Largest: %10.4f.\n", largest);
  else printf("No positive number entered.\n");
}
