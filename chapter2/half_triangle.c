#include <stdio.h>

#define SCALE 1

int main(void) {
  int triangle_rows, triangle_cols;
  
  printf("Triangle row number: ");
  scanf("%d", &triangle_rows);
  
  triangle_rows *= SCALE;
  triangle_cols = triangle_rows;

  for(int row = 0; row < triangle_rows; row++) {
    for(int col = 0; col < triangle_cols; col++) {
      if(triangle_rows - row - 1 <= col) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  } 

  return 0;
}
