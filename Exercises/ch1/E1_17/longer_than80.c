#include <stdio.h>

int getsline(char line[], int maxline);

int main(){
  int print_lim = 80;
  int maxline = 255;
  char line[maxline];
  int n=0;
  while ( (n = getsline(line, maxline)) ) {
    if (n>=print_lim) {
      printf("%s", line);
    }
  }
  return 0;
}

int getsline(char line[], int maxline){
  char c;
  int i=0;
  for (i=0; i<maxline-1 && (c=getchar()) != EOF && c!='\n'; ++i){
    line[i] = c;
  }
  if (c=='\n') {
    line[i++] = c;
  }
  line[i] = '\0';
  return i;
}
