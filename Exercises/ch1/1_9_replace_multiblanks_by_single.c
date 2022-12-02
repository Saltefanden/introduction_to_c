#include <stdio.h>

int main(){
  int c;
  int is_previous_blank=0;
  while ((c=getchar())!=EOF){
    if (c!=' '){
      putchar(c);
      is_previous_blank=0;
    } else if (!is_previous_blank){
      putchar(' ');
      is_previous_blank=1;
    }
  }
}
