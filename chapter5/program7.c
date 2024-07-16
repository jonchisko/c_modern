#include <stdio.h>

int main(void) {
  // Program finds smallest and largest among 4 entered ints
  int a, b, c, d;
  printf("Enter 4 integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  int largest_ab = a;
  int smallest_ab = a;
  if (largest_ab < b) {
    largest_ab = b;
  } else {
    smallest_ab = b;
  }

  int largest_cd = c;
  int smallest_cd = c;
  if (largest_cd < d) {
    largest_cd = d;
  } else {
    smallest_cd = d;
  }

  if (smallest_ab < smallest_cd) {
    printf("Smallest: %10d.\n", smallest_ab);
  } else {
    printf("Smallest: %10d.\n", smallest_cd);
  }

  if (largest_ab > largest_cd) {
    printf("Largest: %10d.\n", largest_ab);
  } else {
    printf("Largest: %10d.\n", largest_cd);
  }
  
}
