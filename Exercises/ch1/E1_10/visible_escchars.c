#include <stdio.h>

int main(){
  char c;
  while ( (c=getchar()) != EOF ) {
    if (c=='\t'){
      putchar('\\');
      putchar('t');
    } else if (c=='\n'){
      putchar('\\');
      putchar('n');
    } else if (c=='\\'){
      putchar('\\');
      putchar('\\');
    } else {
      putchar(c);
    }
  }
  return 0;
}
