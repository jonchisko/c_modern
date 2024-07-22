#include <stdio.h>

#define N 5

int main(void) {
  int arr[N][N] = {{0}};

  for (int i = 0; i < N; i++) {
    printf("Enter row %d: ", i + 1);
    scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3],
          &arr[i][4]);
  }

  int col_sum[N] = {0};

  for (int i = 0; i < N; i++) {
    int sum = 0;
    for (int j = 0; j < N; j++) {
      col_sum[j] += arr[i][j];
      sum += arr[i][j];
    }
    printf("ROW SUM: %5d\n", sum);
  }
  printf("\n");
  printf("COL SUM: ");
  for (int j = 0; j < N; j++) {
    printf("%3d", col_sum[j]);
  }

  printf("\n");
  return 0;
}
