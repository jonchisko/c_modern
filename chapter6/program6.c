#include <stdio.h>

// just as a joke
#define IS_EVEN 2

int main(void) {
  int limit;

  printf("Enter limit: ");
  scanf("%d", &limit);

  for(int i = 2; i*i <= limit; i += 2) {
    printf("%-10d\n", i * i);
  }

  return 0;
}
