#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void toUpperCase(char* str);
void to_uppercase(char* str);
void test_toupper(void);
char* to_uppercase_copy(const char* str);
void test_toupper_copy(void);
char* doubleSpace(const char* str);
void test_doubleSpace();

int main(){
  test_doubleSpace();
  /* test_toupper_copy(); */
  return 0;
}

void test_doubleSpace(){
  char str[] = "Der er noget\nder gør de her\nmellemrum til\nmellemrum  til\nmellemrum   til\nmellemrum    til\nmeget\tlange\n";
  char* out = doubleSpace(str);
  printf("%s\n", str);
  printf("%s\n", out);

}

void test_toupper_copy(void){
  char str[] = "Min sure basse er 12 dage i køleskabet";
  char* upper_str = to_uppercase_copy(str);
  printf("%s\n", str);
  printf("%s\n", upper_str);
}

void test_toupper(void){
  char str[] = "Min sure basse er 12 dage i køleskabet";
  char str2[] = "Min sure basse er 12 dage i køleskabet";
  toUpperCase(str);
  to_uppercase(str2);
  printf("%s\n", str);
  printf("%s\n", str2);
}

char* doubleSpace(const char* str){
  int i, j=0;
  char* ds = malloc(sizeof(char) * (strlen(str)*2 + 1) );
  for (i = 0; str[i]; ++i){
    ds[j++] = str[i];
    if (isspace(str[i])){
      ds[j++] = str[i];
    }
  }
  ds[j] = '\0';
  return ds;
}

char* to_uppercase_copy(const char* str){
  int i;
  char* dest = malloc(sizeof(char) * (strlen(str) + 1));
  for (i=0; str[i]; ++i){
    dest[i] = toupper(str[i]);
  }
  dest[i] = '\0';
  return dest;
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

