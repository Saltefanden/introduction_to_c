#include <stdio.h>

int getsline(char line[], int maxline);
void detab(char out[], char line[], int maxline, int tabstop);

int main() {
  int n;
  int maxline = 100;
  char line[maxline];
  char out[maxline];
  int tabstop = 2;
  while ((n = getsline(line, maxline)) > 0) {
    /* printf("%s\n", line); */
    detab(out, line, maxline, tabstop);
    printf("%s", out);
  }
}

int getsline(char line[], int maxline) {
  char c;
  int i;
  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i++] = c;
  }
  line[i] = '\0';
  return i;
}

void detab(char out[], char line[], int maxline, int tabstop) {
  char c;
  int in_i = 0;
  int out_i = 0;
  while ((c = line[in_i++]) && out_i < maxline - 1) {
    if (c == '\t') {
      out[out_i++] = ' ';
      while ((out_i) % tabstop) {
        out[out_i++] = ' ';
      }
    } else {
      out[out_i++] = c;
    }
  }
  out[out_i] = '\0';
}
