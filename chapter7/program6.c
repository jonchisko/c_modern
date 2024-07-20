#include <stdio.h>


int main(void) {
  printf("Print size of short, int, long, float, double and long double:\n");

  printf("short int %lu\n", sizeof(short int));
  printf("int %lu\n", sizeof(int));
  printf("long int %lu\n", sizeof(long int));
  printf("long long int %lu\n", sizeof(long long int));
  printf("float %lu\n", sizeof(float));
  printf("double %lu\n", sizeof(double));
  printf("long double%lu\n", sizeof(long double));
}
