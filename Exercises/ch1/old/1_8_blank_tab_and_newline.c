#include <stdio.h>

int main(){
  int c=0;
  int blanks=0;
  int tabs=0;
  int newlines=0;
  while ( (c=getchar()) != EOF ){
    if (c==' ')
      ++blanks;
    if (c=='\t')
      ++tabs;
    if (c=='\n')
      ++newlines;
  }
  printf("Blanks\t %10.d\nTabs\t %10.d\nNewlines\t %d\n", blanks, tabs, newlines);
}
