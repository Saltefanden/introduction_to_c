#include <stdio.h>

int main(){
  _Bool previous_blank=0;
  char c;
  while ( (c=getchar())!=EOF ) {
    if (c==' ') {
      if (!previous_blank) {
        putchar(c);
        previous_blank=1;
      }
    } else {
      putchar(c);
      previous_blank=0;
    }
  }
  return 0;
}
