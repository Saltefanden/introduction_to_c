#include <stdio.h>

int atoi(char str[]){
  int i=0, result=0;
  char c;
  while ((c = str[i++]) != '\0'){
    if (c == ' '){continue;}
    result = result * 10 + (c - '0');
  }
  return result;
}

int main(){
  printf("%d\n", atoi("  12345"));
  return 0;
}
