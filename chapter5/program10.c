#include <stdio.h>

int main(void) {
  int grade;
  printf("Enter grade: ");
  scanf("%d", &grade);
 
   if (grade > 100 || grade < 0) {
    printf("Wrong input.\n");
    return 1;
  }

  int main_grade = grade / 10;
  char letter;
  switch(main_grade) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: letter = 'F'; break;
    case 6: letter = 'D'; break;
    case 7: letter = 'C'; break;
    case 8: letter = 'B'; break;
    case 9: letter = 'A'; break;
    case 10: letter = 'A'; break;
    default: printf("Wrong input.\n"); return 1;
  }

  printf("Letter grade: %c.\n", letter);

  return 0;
}
