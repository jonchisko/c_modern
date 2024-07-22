#include <ctype.h>
#include <stdio.h>

#define MSG_LEN 256

int main(void) {
  char msg[MSG_LEN] = {'_'};

  char c;
  int i = 0;

  while ((c = getchar()) && c != '\n') {
    msg[i++] = toupper(
        c); // it s implicitly cast back to char. "c" is implicitly cast to int.
  }

  for (int i = 0; i < MSG_LEN; i++) {
    if (msg[i] == '_') {
      break;
    }

    switch (msg[i]) {
    case 'A':
      printf("4");
      break;
    case 'B':
      printf("8");
      break;
    case 'E':
      printf("3");
      break;
    case 'I':
      printf("1");
      break;
    case 'O':
      printf("0");
      break;
    case 'S':
      printf("5");
      break;
    default:
      printf("%c", msg[i]);
    }
  }
  printf("!!!!!!!!!!!!!!\n");
}
