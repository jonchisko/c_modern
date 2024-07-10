#include <stdio.h>

int main(void) {
  float a, b;
  // scanf("%f, %f", &a, &b);
  // printf("%f : %f", a, b);
  
  scanf("%f /%f", &a, &b);
  printf("%f : %f", a, b);
  // int a;
  // printf("%d", a);
  printf("To C, or not to C: that is the question.\n");
  
  printf("test: %5.5d!\n", 2);
  printf("test:%15.5e\n", 30.253);
  printf("test:%.4f\n", 83.162);
  printf("test:%-6.2g\n", .0000009979);


  printf("%d\n", 8 / -5);
  printf("%d\n", -8 / -5);  
  return 0;
}
