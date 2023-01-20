#include <stdio.h>

int main() {
  char c;
  int result = 0;
  int digit = 0;
  int add = 0;
  while ((c = getchar()) != EOF && c!='\n') {
    if (digit == 0 && c == '0') {
      c = getchar();
      if (c == 'x' || c == 'X') {
        c = getchar();
      }
    }
    if ('0' <= c && c <= '9') {
      add = c - '0';
    } else if ('a' <= c && c <= 'f') {
      add = c - 'a' + 10;
    } else if ('A' <= c && c <= 'F') {
      add = c - 'A' + 10;
    } else {
      printf("Invalid character: %c\n", c);
      return 1;
    }
    result = result * 16 + add;
    digit = 1;
  }
  printf("%d\n", result);
  return 0;
}
