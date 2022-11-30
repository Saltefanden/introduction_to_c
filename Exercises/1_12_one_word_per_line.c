#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(){
  int c;
  int empty_line = TRUE;
  while ((c = getchar()) != EOF){
    if (c != ' ' && c != '\t' && c != '\n'){
      putchar(c);
      empty_line = FALSE;
    } else if (!empty_line) {
      putchar('\n');
      empty_line=TRUE;
    }
  }
  return 0;
}
