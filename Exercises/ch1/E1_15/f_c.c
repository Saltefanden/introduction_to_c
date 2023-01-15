
#include <stdio.h>

float f2c(float fahr);

int main(){
  float fahr, celsius;
  printf("%-4s %10s\n", "Fahr", "Celsius");
  printf("===============\n");
  for (fahr=0.0; fahr<300; fahr+=20){
    printf("%4.0f %10.1f\n", fahr, f2c(fahr));
  }
}

float f2c(float fahr) {
  return (5.0/9.0) * (fahr - 32.0);
}
