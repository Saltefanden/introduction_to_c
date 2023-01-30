#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

void expand(char s1[], char s2[]);

int main() {
  size_t MAXLEN = 10000;
  char s1[] = "Der er -a-b og a-g-y gode muligheder.";
  char s2[MAXLEN];
  expand(s1, s2);
  printf("%s\nExpands to:\n%s\n", s1, s2);
  char s3[] = "Her kommer 1-8 større problemer 8-1 y-f";
  char s4[MAXLEN];
  expand(s3, s4);
  printf("%s\nExpands to:\n%s\n", s3, s4);
  char s5[] = "Her kommer a-z0-9 større problemer -a-d-";
  char s6[MAXLEN];
  expand(s5, s6);
  printf("%s\nExpands to:\n%s\n", s5, s6);

}

void expand(char s1[], char s2[]) {
  int isdig, islow, isup;
  size_t i = 0;
  size_t j = 0;
  char c;
  char cn;
  while ((c = s1[i++])) {
    if (s1[i] == '-' && (isdig = isdigit(c)) == isdigit(s1[i + 1]) &&
        (islow = islower(c)) == islower(s1[i + 1]) &&
        (isup = isupper(c)) == isupper(s1[i + 1]) && c < s1[i + 1]) {
      for (cn = c; cn < s1[i + 1]; ++cn) { // Leave the last character in the
                                           // expansion c-cn for futher handling
        s2[j++] = cn;
      }
      ++i;
    } else {
      s2[j++] = c;
    }
  }
}
