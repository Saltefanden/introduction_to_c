#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char c;
  int tabstop = 2;
  if (argc == 2) {
    tabstop = atoi(argv[1]);
  }
  int nspaces = 0;
  int col = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      nspaces = 0;
      col += tabstop;
      putchar(c);
    } else if (c != ' ') {
      while (nspaces--) { // remember to add the spaces that didn't make it to
                          // the tabstop
        putchar(' ');
        ++col;
      }
      putchar(c);
      col = (c == '\n') ? 0 : col + 1;
      nspaces = 0;
    } else if ((col + (nspaces+1)) % tabstop == 0 && nspaces) {
      ++nspaces;
      putchar('\t');
      col += nspaces;
      nspaces = 0;
    } else {
      ++nspaces;
      /* ++col; */
    }
  }
}
