#include <stdio.h>

int getsline(char line[], int maxsize);
void copy(char dest[], char src[]);

int main() {
  int maxsize = 80;
  int longest_len = 0;
  char line[maxsize], longest[maxsize];
  int n=0;
  while ((n = getsline(line, maxsize)) != 0) {
    if (n > longest_len) {
      longest_len = n;
      copy(longest, line);
    }
  }
  printf("Longest line is of length: %d and contains:\n", longest_len);
  printf("%s\n", longest);
}

int getsline(char line[], int maxsize) {
  char c;
  int length = 0;
  int i = 0;
  while ((c = getchar()) != EOF) {
    if (i < maxsize) {
      line[length++] = c;
    }
    ++i;
    if (c=='\n'){break;}
  }
  line[length] = '\0';
  return i;
}

void copy(char dest[], char src[]) {
  int i = 0;
  while ((dest[i] = src[i])) {
    ++i;
  }
}
