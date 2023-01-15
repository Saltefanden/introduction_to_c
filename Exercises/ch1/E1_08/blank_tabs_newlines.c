#include <stdio.h>

int main(){
  int blanks=0, tabs=0, newlines=0;
  char c;
  while ((c=getchar())!=EOF) {
    if (c == ' '){
      ++blanks;
    } else if (c == '\t') {
      ++tabs;
    } else if (c == '\n') {
      ++newlines;
    }
  }
  printf("Blanks:\t\t%10d\nTabs:\t\t%10d\nnewlines:\t%10d\n", blanks, tabs, newlines);
  return 0;
}
