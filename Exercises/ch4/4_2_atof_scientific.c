#include <stdio.h>

float atof(char str[]){
  int i=0,  exp = 0;
  double result=0.0, pwr = 1.0;
  char c;

  for (i=0; str[i] == ' '; ++i){
    ;
  }
  int sign = str[i] == '-' ? -1 : 1;
  if (str[i] == '+' || str[i] == '-'){ ++i;}

  while ((c = str[i++]) != '\0' && c != '.' && c !='E' && c != 'e'){
    result = result * 10 + (c - '0');
  }
  --i;
  if (str[i] == '.') {++i;}

  while ((c = str[i++]) != '\0' && c != 'e' && c != 'E'){
    result = result * 10 + (c - '0');
    pwr *= 10;
  }
  --i;

  if (str[i] == 'e' || str[i] == 'E'){ ++i; }

  int exp_sign = str[i] == '-' ? -1 : 1;
  if (str[i] == '+' || str[i] == '-'){ ++i;}

  while ((c = str[i++]) != '\0'){
    exp = exp * 10 + (c - '0');
  }
  --i;
  if (exp_sign == 1){
    while (exp--){
      pwr /= 10;
    } 
  } else {
    while (exp--){
      pwr *= 10;
    } 
  }
  return sign * result/pwr;
}

int main(){
  printf("%f\n", atof("-21.2e-2"));
  return 0;
}
