#include <stdio.h>

unsigned invert(const unsigned x, int p, int n);

int main() {
  int p=5, n=3;
  unsigned x = 0155;                  // 1 101 101 =109
  unsigned res = invert(x,5,3);       // 1 010 101 =85;
  printf("Flipping %d bits from position %d in %u results in:\n%u\n", n,p,x,res); 
  return 0;
}


unsigned invert(const unsigned x, int p, int n){
  // Create a ones mask with the positions as specified, and then xor it with input
  // 1 101 101
  // 0 111 000  op^
  // 1 010 101  =
  //   ^^^      bits flipped
  unsigned mask = ~(~0 << n) << (p+1-n);
  return x ^ mask;
}

