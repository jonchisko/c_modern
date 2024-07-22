#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_DIM 10
#define DIR 4

int get_random_index(int max_row, int max_col);
bool is_valid(int row, int col, int max_row, int max_col,
              char grid[max_row][max_col]);
int get_random_direction(int current_row, int current_col, int max_row,
                         int max_col, char grid[max_row][max_col]);

int main(void) {
  char grid[GRID_DIM][GRID_DIM];

  for (int i = 0; i < GRID_DIM; i++) {
    for (int j = 0; j < GRID_DIM; j++) {
      grid[i][j] = '.';
    }
  }

  srand(time(NULL));

  char letter = 'A';

  int position = get_random_index(GRID_DIM, GRID_DIM);
  grid[position / GRID_DIM][position % GRID_DIM] = letter++;

  printf("begin %d, %d\n", position / GRID_DIM, position % GRID_DIM);
  while (letter <= 'Z') {
    position = get_random_direction(position / GRID_DIM, position % GRID_DIM,
                                    GRID_DIM, GRID_DIM, grid);
    printf("to write in: %d, %d\n", position / GRID_DIM, position % GRID_DIM);
    if (position < 0)
      break;

    grid[position / GRID_DIM][position % GRID_DIM] = letter++;
  }

  for (int i = 0; i < GRID_DIM; i++) {
    for (int j = 0; j < GRID_DIM; j++) {
      printf("%2c", grid[i][j]);
    }
    printf("\n");
  }

  return 0;
}

int get_random_index(int max_row, int max_col) {
  return rand() % (max_row * max_col);
}

bool is_valid(int row, int col, int max_row, int max_col,
              char grid[max_row][max_col]) {
  if (row >= max_row || row < 0 || col >= max_col || col < 0) {
    return false;
  }

  return grid[row][col] == '.';
}

int get_random_direction(int current_row, int current_col, int max_row,
                         int max_col, char grid[max_row][max_col]) {
  int random_direction = rand() % DIR;

  int next_row, next_col;
  next_row = current_row;
  next_col = current_col;
  printf("start_find_dir %d, %d\n", next_row, next_col);

  switch (random_direction) {
  case 0: {
    next_row = current_row + 1;
    break;
  }
  case 1: {
    next_col = current_col + 1;
    break;
  }
  case 2: {
    next_row = current_row - 1;
    break;
  }
  case 3: {
    next_col = current_col - 1;
    break;
  }
  }

  printf("next_find_dir %d, %d\n", next_row, next_col);
  int counter = 0;
  while (counter < DIR) {
    if (is_valid(next_row, next_col, max_row, max_col, grid)) {
      break;
    }
    next_row = current_row;
    next_col = current_col;
    random_direction = (random_direction + 1) % DIR;
    printf("%d %d %d\n", next_row, next_col, random_direction);
    switch (random_direction) {
    case 0: {
      next_row = current_row + 1;
      break;
    }
    case 1: {
      next_col = current_col + 1;
      break;
    }
    case 2: {
      next_row = current_row - 1;
      break;
    }
    case 3: {
      next_col = current_col - 1;
      break;
    }
    }
    counter++;
  }

  if (counter == DIR)
    return -1;

  return next_row * GRID_DIM + next_col;
}
