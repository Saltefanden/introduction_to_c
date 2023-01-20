#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char c;
  int tabstop = 2;
  if (argc == 2){
    tabstop = atoi(argv[1]);
  }
  int i=0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar(' ');
      ++i;
      while (i % tabstop) {
        putchar(' ');
        ++i;
      }
    } else {
      putchar(c);
      ++i;
    }
    if (c == '\n'){
      i=0;
    }
  }
}

