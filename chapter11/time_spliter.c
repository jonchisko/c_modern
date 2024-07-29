#include <stdio.h>

#define S_IN_H 3600
#define M_IN_S 60

void split_time(long int, int *, int *, int *);

int main(void) {
  long int total_seconds;
  printf("Seconds: ");
  scanf("%ld", &total_seconds);

  int hours, minutes, seconds;
  split_time(total_seconds, &hours, &minutes, &seconds);
  printf("Splitted time: h:m:s : %d:%d:%d\n", hours, minutes, seconds);

  return 0;
}

void split_time(long int total_seconds, int *hours, int *minutes,
                int *seconds) {
  *hours = total_seconds / S_IN_H;
  total_seconds %= S_IN_H;

  *minutes = total_seconds / M_IN_S;
  total_seconds %= M_IN_S;

  *seconds = total_seconds;
}
