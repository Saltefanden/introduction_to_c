#include <stdio.h>

int main(){
  float fahr, celsius;
  printf("%-4s %10s\n", "Fahr", "Celsius");
  printf("===============\n");
  for (fahr=300; fahr>=0; fahr-=20){
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%4.0f %10.1f\n", fahr, celsius);
  }
}
