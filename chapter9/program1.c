#include <stdio.h>

void print_array(int n, int[n]);
void selection_sort(int n, int[n]);

int main(void) {
  int n;
  printf("Number of numbers you want to enter: ");
  scanf("%d", &n);

  int array[n];

  printf("Enter numbers: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  print_array(n, array);

  selection_sort(n, array);

  print_array(n, array);
}

void print_array(int n, int array[n]) {

  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void selection_sort(int n, int array[n]) {
  if (n <= 1) {
    return;
  }

  int index_max = 0;
  int value_max = array[index_max];

  for (int i = 1; i < n; i++) {
    if (array[i] > value_max) {
      index_max = i;
      value_max = array[index_max];
    }
  }

  int tmp = array[n - 1];
  array[n - 1] = array[index_max];
  array[index_max] = tmp;

  selection_sort(n - 1, array);
}
