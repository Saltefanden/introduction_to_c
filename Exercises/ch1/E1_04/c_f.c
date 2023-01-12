#include <stdio.h>

int main() {
  float fahr, celsius;
  printf("%-10s %4s\n", "Celsius", "Fahr");
  printf("===============\n");
  for (celsius = 0.0; celsius < 300; celsius += 20) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("%7.0f %7.1f\n", celsius, fahr);
  }
}
