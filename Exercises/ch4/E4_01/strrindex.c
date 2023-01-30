#include <stdio.h>

int strrindex(char s[], char t[]);

int main() {
  char s[] = "Sæt nu om du nu kunne underbukse fnug finde nutiden endnu du?";
  char t[] = "de";
  int idx = strrindex(s, t);
  printf("Finding \"%s\" in \"%s\":\nIndex: %d\n", t, s, idx);
  if (idx != -1) {
    printf("%s\n", s);
    printf("%*.*s%s\n", idx, idx, " ", "^");
  }
}

int strrindex(char s[], char t[]) {
  int i, j, k, l;
  for (i = 0; s[i]; ++i)
    ;
  for (j = 0; t[j]; ++j)
    ;
  --j, --i; // Fuck off with the \0
  while (i > 0) {
    k = i;
    l = j;
    while (t[l] == s[k]) {
      --l;
      --k;
    }
    if (l == -1) {
      return k;
    }
    --i;
  }
  return -1;
}
