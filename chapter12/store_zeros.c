#include <stdio.h>

#define N 6

void store_zeros(int *, int);

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6};

  store_zeros(arr, N);

  for (int *p = arr; p < arr + N; p++) {
    printf("%d ", *p);
  }
  printf("\n");

  return 0;
}

void store_zeros(int *p, int n) {
  int *end = p + n;
  while (p < end) {
    *p++ = 0;
  }
}
