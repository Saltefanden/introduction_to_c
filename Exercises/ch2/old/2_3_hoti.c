#include <stdio.h>

int htoi(char str[]);

int main(){

  int c, i=0;
  int MAXLINE = 1000;
  char line[MAXLINE];

  while ( (c = getchar()) != EOF ){
   if (i < MAXLINE) {
    line[i] = c; 
   } 
   ++i;
  }
  printf("Value as int: %d\n", htoi(line));
  return 0;
}


int htoi(char str[]){
  int hexnum = 0; 
  int i = 0;
  if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X')){
    i = 2;
  }
  for (; str[i] != '\0'; ++i){
    if (str[i] >= '0' && str[i] <= '9'){
      hexnum = hexnum * 16 + str[i] - '0';
    } else if (str[i] >= 'a' && str[i] <= 'f'){
      hexnum = hexnum * 16 + (str[i] - 'a')+10;
    } else if (str[i] >= 'A' && str[i] <= 'F'){
      hexnum = hexnum * 16 + (str[i] - 'A')+10;
    } else {
      ;
    }
  }
  return hexnum;
}
