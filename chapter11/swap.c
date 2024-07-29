#include <stdio.h>

void swap(int *, int *);

int main(void) {
  int a = 10;
  int b = 20;

  printf("Int a: %2d, b: %2d.\n", a, b);

  swap(&a, &b);

  printf("Int a: %2d, b: %2d.\n", a, b);

  return 0;
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
