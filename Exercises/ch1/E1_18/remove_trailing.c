#include <stdio.h>

int getsline(char line[], int maxline);

int main(){
  char c;
  int maxline=100;
  char line[maxline];
  int n=0;
  while ( (n=getsline(line, maxline)) != 0 ){
    if (n>1){
      printf("%s\n", line);
    }
  }
  return 0;
}

int getsline(char line[], int maxline) {
  char c;
  int i;
  int last =0;
  for (i=0; i<maxline-1 && (c=getchar())!= EOF && c!='\n'; ++i){
    line[i] = c;
    if (c!=' ' && c!='\t' && c!='\n'){
      last=i;
    }
  }
  if (c=='\n'){
    ++i;
  }
  line[last + 1] = '\0';
  return i;
}
