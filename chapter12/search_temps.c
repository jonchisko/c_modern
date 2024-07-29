#include <stdbool.h>
#include <stdio.h>

#define DAYS 7
#define HOURS 24

bool search(int *, int, int);
void print_row(int *);
void print_col(int (*)[HOURS], int);

int main(void) {
  int temperatures[DAYS][HOURS] = {
      {20, 31, 0, 30, 11}, {[0] = 42, [10] = 40}, {32, 0}};

  for (int *p = &temperatures[0][0]; p < &temperatures[0][0] + DAYS * HOURS;
       p++) {
    printf("%d ", *p);
  }
  printf("\n");

  int key = 32;
  printf("%d\n", search(&temperatures[0][0], DAYS * HOURS, key));

  print_row(temperatures[1]);
  print_col(temperatures, 10);

  return 0;
}

bool search(int *p, int n, int key) {
  int *end = p + n;
  while (p < end) {
    if (*p++ == key) {
      return true;
    }
  }

  return false;
}

void print_row(int *row) {
  int *end = row + HOURS;
  while (row < end) {
    printf("%d ", *row++);
  }
  printf("\n");
}

void print_col(int (*col)[HOURS], int col_index) {
  for (int(*row)[HOURS] = &col[0]; row < col + DAYS; row++) {
    printf("%d ", (*row)[col_index]);
  }
  printf("\n");
}
