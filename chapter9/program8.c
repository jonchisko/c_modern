#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice_sum(void);
bool play_game(void);
void clear_console(void);

int main(void) {

  srand(time(NULL));
  printf("Welcome to the game of craps.\n");

  int wins, iteration;
  bool result;
  wins = iteration = 0;

  for (;;) {
    result = play_game();
    ++iteration;
    if (result) {
      wins++;
    }

    printf("Wins:%3d.\n", wins);
    printf("Losses:%3d.\n", iteration - wins);

    printf("One more?\n");
    if (getchar() != 'y') {
      break;
    }

    clear_console();
  }
}

int dice_sum(void) { return (rand() % 6 + 1) + (rand() % 6 + 1); }

bool play_game(void) {
  short number = dice_sum();
  printf("You rolled %hu.\n", number);

  short point;
  switch (number) {
  case 11:
  case 7:
    printf("You won.\n");
    return true;
  case 2:
  case 3:
  case 12:
    printf("You lost.\n");
    return false;
  default:
    point = number;
    printf("Your point is %hu.\n", point);
  }

  for (;;) {
    number = dice_sum();
    printf("You rolled %hu.\n", number);

    if (number == 7) {
      printf("You lost.\n");
      return false;
    }

    if (number == point) {
      printf("You won.\n");
      return true;
    }
  }
}

void clear_console(void) {
  while (getchar() != '\n')
    ;
}
