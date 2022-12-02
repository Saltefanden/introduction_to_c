#include <stdio.h>

const int MAXLINE = 1000;
int getsline(char line[], int MAXLINE);
void trimline(char line[], int last_printable_position);

int main(){
  char line[MAXLINE];
  int last_printable_position = 0;
  while ((last_printable_position = getsline(line, MAXLINE)) >= 0){
    trimline(line, last_printable_position);
    printf("%s\n", line);
  }
  return 0;
}

int getsline(char s[], int MAXLINE){
  int c, i;
  int array_position = 0;
  int last_printable_position = -1;
  for (i=0; (c = getchar()) != EOF; ++i){
    if (i < MAXLINE){
      s[array_position] = c;
      if (c != ' ' && c != '\t' && c != '\n'){
        last_printable_position = array_position;
      }
      ++array_position;
    } 
    if (c == '\n'){
      ++i;
      break;
    }
  }
  s[array_position] = '\0';
  return last_printable_position;
}

void trimline(char line[], int last_printable_position){
  line[last_printable_position+1] = '\0';
  /* char new[last_printable_position+1]; // +1 due to \0 ? */ 
  /* for (int i=0; i<last_printable_position+1; ++i){ */
  /*   new[i] = line[i]; */
  /* } */
  /* new[last_printable_position+1] = '\0'; */
}
