#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void toUpperCase(char* str);
void to_uppercase(char* str);

int main(){
  char str[] = "Min sure basse er 12 dage i køleskabet";
  char str2[] = "Min sure basse er 12 dage i køleskabet";
  toUpperCase(str);
  to_uppercase(str2);
  printf("%s\n", str);
  printf("%s\n", str2);
}

void toUpperCase(char* str){
  char* tapehead = str;
  while (*tapehead++){
    *tapehead = toupper(*tapehead);
  }
} 

void to_uppercase(char* str){
  for (int i=0; str[i]; ++i){
    str[i] = toupper(str[i]);
  }
}

