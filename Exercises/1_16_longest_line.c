#include <stdio.h>

int MAXLINE=1000;

int getsline(char s[], int MAXLINE);
void copy(char to[], char from[]);


int main(){
  int len = 0;
  int max = 0;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = getsline(line, MAXLINE)) > 0){
    if (len > max){
      max = len;
      copy(longest, line);
    }
  }
  
  if (max > 0){
    printf("%s", longest);
    printf("Length: %.2d\n", max);
  }
  return 0;
}

/* Reads a line from a stream */
int getsline(char s[], int MAXLINE){
  int c; 
  int i;
  for (i=0; (c = getchar()) != EOF; ++i){
    if (i < MAXLINE){
      s[i] = c; 
    }
    if (c == '\n'){
      ++i;
      break;
    }
  }
  s[i] = '\0';
  return i;
}

/* Copy from one array to another */
void copy(char to[], char from[]){
  int i=0;
  while ((to[i] = from[i]) != '\0'){
    ++i;
  }
}
