#include <stdio.h>

int any(char s1[], char s2[]);

int main(){
  char s1[] = "abcdefghij";
  char s2[] = "Køln i nus";
  printf("The first position in:\n%s\nWhere it matches any character from:\n%s\nis at index: %d\n", s1, s2, any(s1,s2));
  return 0;
}

int any(char s1[], char s2[]){

  for (int i=0; s1[i]!='\0'; ++i){
    for (int j=0; s2[j]!='\0'; ++j){
      if (s1[i]==s2[j]){
        return i;
      }
    }
  }

  return -1;
}

