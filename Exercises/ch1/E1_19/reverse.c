#include <stdio.h>

void reverse(char line[]);
int getsline(char line[], int maxline);

int main() {
  int n;
  int maxline = 100;
  char line[maxline];
  while ((n = getsline(line, maxline)) != 0) {
    reverse(line);
    reverse(line);
    printf("%s", line);
  }
}

void reverse(char line[]) {
  char tmp;
  int length = 0;
  while (line[length])
    ++length;
  --length; // do not include '\0'
  if (line[length] == '\n') {
    --length;
  }
  for (int j = 0; j < (length + 1) / 2; ++j) {
    tmp = line[j];
    line[j] = line[length - j];
    line[length - j] = tmp;
  }
}

int getsline(char line[], int maxline) {
  int i;
  char c;
  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i++] = c;
  }
  line[i] = '\0';
  return i;
}
