#include <stdio.h>

int polynomial(int);

int main(void) {
  int x;
  printf("Enter x to compute the polynomial: ");
  scanf("%d", &x);

  printf("%d\n", polynomial(x));
}

int polynomial(int x) { return 6 * (x * x * x) - 3 * (x * x) + 2 * (x) + 100; }
