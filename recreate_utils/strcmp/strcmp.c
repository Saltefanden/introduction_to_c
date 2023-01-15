#include <stdio.h>

int strcmpl(char *s, char *t){
  while(*s == *t && *t && *s){
    s++;
    t++;
  }
  return *s > *t ? 1 : 
          *s < *t ? -1 : 0;
}

void printoutcome(char *s1, char* s2){
  printf("strcmpl(%s, %s) = %d\n", s1, s2, strcmpl(s1, s2));

}

int main(){
  char str1[] = "abc";
  char str2[] = "bc";
  char str3[] = "cc";

  printoutcome(str1, str1);
  printoutcome(str1, str2);
  printoutcome(str2, str3);
  printoutcome(str3, str2);
  printoutcome("john", "johnny");
}

