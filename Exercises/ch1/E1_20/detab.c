#include <stdio.h>

int main() {
  char c;
  int maxline = 100;
  char line[maxline];
  int tabstop = 3;
  int i;
  while (c != EOF) {
    i=0;
    while (i < maxline - 1 && (c = getchar()) != EOF && c != '\n') {
      if (c == '\t') {
        line[i++] = ' ';
        while (i % tabstop) {
          line[i++] = ' ';
        }
      } else {
        line[i++] = c;
      }
    }
    if (c=='\n'){
      line[i++] = c;
    }
    line[i] = '\0';
    printf("%s", line);
  }
}

