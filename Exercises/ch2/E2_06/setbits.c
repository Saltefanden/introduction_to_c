#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(){
  /* unsigned x = 0175;                      //  1 111 101 */ 
  /* unsigned y = 0172;                      //  1 111 010; */
  /* unsigned res = setbits (x, 3, 3, y);    //  1 110 101 */
  /*                                         //      ^ ^^ */

  unsigned x = 0125;                      //   1010101
                                          //     ^^^^
  unsigned y = 0334;                      //  11011100
                                          //      ^^^^ 
  unsigned res = setbits (x, 3, 3, y);    //   1011001
                                          //     ^^^^  
  printf("Result: %u\n%d\n", res, res);
  return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y){
  unsigned rn_y = y & ~(~0 << n); // rightmost n bits of y
  unsigned shifted_rn_y = rn_y << (p+1-n);
  unsigned x_mask = (~0 << (p+1)) ^ (~0 << (p-n+1));
  return (x & ~x_mask) | shifted_rn_y ;
}

