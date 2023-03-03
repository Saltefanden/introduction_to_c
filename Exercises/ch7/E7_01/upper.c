#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv){
  int lowercase=0;
  char c;
  if (strcmp(*argv, "./lower") == 0){
    lowercase=1;
  }
  while ( (c=getchar()) != EOF ){
    putchar( lowercase? tolower(c) : toupper(c) );
  }
  return 0;
}
