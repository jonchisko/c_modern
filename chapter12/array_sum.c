#include <stdio.h>

int sum_array(int *, int);

int main(void) {
  int n;
  printf("How many numbers? ");
  scanf("%d", &n);

  int arr[n];

  for (int *p = arr; p < arr + n; p++) {
    scanf("%d", p);
  }

  printf("Sum: %d.\n", sum_array(arr, n));

  return 0;
}

int sum_array(int *p, int n) {
  int sum = 0;
  int *end = p + n;

  while (p < end) {
    sum += *p++;
  }

  return sum;
}
