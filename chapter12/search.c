#include <stdbool.h>
#include <stdio.h>

bool search_array(const int[], int, int);

int main(void) {

  int n;
  printf("Number of elements? ");
  scanf("%d", &n);

  int arr[n];
  for (int *p = arr; p < &arr[n]; p++) {
    scanf("%d", p);
  }

  int key;
  printf("Searching for? ");
  scanf("%d", &key);

  printf("Is present %d.\n", search_array(arr, n, key));

  return 0;
}

bool search_array(const int arr[], int n, int key) {
  for (const int *p = arr; p < arr + n; p++) {
    if (key == *p) {
      return true;
    }
  }

  return false;
}
