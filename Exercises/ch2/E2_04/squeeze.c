#include <stdio.h>

void squeeze(char s1[], char s2[]); 

int main(){
  char s1[] = "Der er noget der mangler";
  char s2[] = "Sur pikkemand";

  squeeze(s1, s2);

  printf("%s\n", s1);
  return 0;
}


void squeeze(char s1[], char s2[]){
  int ins2 = 0;
  int i, j;
  for (i=0, j=0; s1[i]!='\0'; ++i){
    ins2 = 0;
    for (int k=0; s2[k]!='\0'; ++k){
      if (s1[i] == s2[k]){
        ins2 = 1;
      }
    }
    if (!ins2) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}

