#include <stdio.h>

int MAXSIZE = 1000;
void reverse(char str[], int size);
int getsline(char str[], int MAXSIZE);

int main(){
  char line[MAXSIZE];
  int size;
  while ((size = getsline(line, MAXSIZE)) > 0){
    reverse(line, size);
    printf("%s", line);
  }
  return 0;
}

int getsline(char str[], int MAXSIZE){
  int c, i;
  int array_position = 0;
  for (i=0; (c = getchar()) != EOF; ++i){
    if (i < MAXSIZE){
      str[array_position] = c;
      ++array_position;
    }
    if (c == '\n'){
      ++i;
      break;
    }
  }
  str[array_position] = '\0';
  return array_position;
}

void reverse(char str[], int size){
  for (int i=0; i < size/2; ++i){
    char temp = str[i];
    str[i] = str[size-i-1];
    str[size-i-1] = temp;
  }
}
