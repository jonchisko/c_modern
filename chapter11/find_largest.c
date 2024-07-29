#include <stdio.h>

#define N 42

int *find_largest(int n, int[n]);

int main(void) {
  int arr[N] = {0, [10] = 100, [31] = -42, [40] = 1000, [41] = 999};
  printf("Largest: %d\n", *find_largest(N, arr));

  return 0;
}

int *find_largest(int n, int arr[n]) {
  int index_largest = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > arr[index_largest]) {
      index_largest = i;
    }
  }

  return &arr[index_largest];
}
