#include <stdio.h>

#define SCALE 1

int main(void) {
  int triangle_rows, triangle_cols;
  
  printf("Triangle row number: ");
  scanf("%d", &triangle_rows);
  
  triangle_rows *= SCALE;
  triangle_cols = triangle_rows;

  for(int row = 0; row < triangle_rows; row++) {
    for(int col = 0; col < triangle_cols * 2; col++) {
      if(col < triangle_cols && triangle_rows - row - 1 <= col) { // could be combine with or
        printf("*");
      } else if (col >= triangle_cols && col < triangle_cols + row) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  } 

  return 0;
}
