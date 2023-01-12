#include <stdio.h>

int MAXLINE = 1000;
int getsline(char line[], int MAXLINE);

int main(){
  int len = 0;
  char line[MAXLINE];

  while ((len = getsline(line, MAXLINE)) > 0){
    if (len > 80){
      printf("%s\n", line);
    }
  }

  return 0;
}


int getsline(char s[], int MAXLINE){
  int c;
  int char_count;
  int array_position = 0;

  for (char_count=0; (c = getchar()) != EOF; ++char_count){
    if (char_count < MAXLINE){
      s[char_count] = c;
      ++array_position;
    } 
    if (c == '\n'){
      ++char_count;
      break;
    }
  }

  s[array_position] = '\0';
  return char_count;
}
