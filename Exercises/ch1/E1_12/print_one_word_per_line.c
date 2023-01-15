#include <stdio.h>

int main(){
  _Bool just_newlined=0;
  char c;
  while ( (c=getchar())!=EOF ) {
    if (c=='\n' || c=='\t' || c==' '){
      if (!just_newlined) {
        putchar('\n');
      }
      just_newlined=1;
    } else {
      putchar(c);
      just_newlined=0;
    }
  }
  return 0;
}
