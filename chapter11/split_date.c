#include <stdio.h>

// given preconditions
#define MONTH_NUM 12
#define DAY_NUM 31

void split_date(int, int *, int *);

int main(void) {
  int total_days;
  printf("Enter day: ");
  scanf("%d", &total_days);

  int month, day;
  split_date(total_days, &month, &day);
  printf("Month %d, Day %d\n", month, day);

  return 0;
}

void split_date(int total_days, int *month, int *day) {
  *month = (total_days - 1) / DAY_NUM + 1;
  total_days = (total_days - 1) % DAY_NUM;

  *day = total_days + 1;
}
