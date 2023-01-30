#include <stdio.h>
#include <string.h>

void escape(char s[], char t[]);

int main(){
  char t[] = "Der er nogle \t newlines og \
    tabs ";
  char s[2*strlen(t)];
  escape(s, t);
  printf("%s\n", s);
}


void escape(char s[], char t[]){
  size_t si=0;
  size_t ti=0;
  while (t[ti]){
    switch(t[ti]) {
      case '\t': 
        s[si++]='\\'; 
        s[si]='t'; 
        break;
      case '\n':
        s[si++]='\\';
        s[si] = 'n';
        break;
      default:
        s[si] = t[ti];
    }
    ++si;
    ++ti;
  }
}

