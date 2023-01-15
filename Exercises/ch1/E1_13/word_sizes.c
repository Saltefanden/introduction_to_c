#include <stdio.h>

int main(){
  int MAXSIZE=100;
  int histogram[MAXSIZE];
  int i, j;
  for (i=0; i<MAXSIZE; ++i){ histogram[i]=0; }
  int histogram_width = 40;
  int histogram_height = 40;
  int current_wordsize=0;
  int max_wordsize=0;
  int max_wordcount=0;
  _Bool inword = 0;
  char c;

  while ((c=getchar())!=EOF) {
    if (c!='\n' && c!='\t' && c!=' '){
      inword=1;
      ++current_wordsize;
    } else if (inword){
      ++histogram[current_wordsize];
      if (current_wordsize > max_wordsize) {
        max_wordsize = current_wordsize;
      }
      if (histogram[current_wordsize] > max_wordcount){
        max_wordcount = histogram[current_wordsize];
      }
      inword=0;
      current_wordsize=0;
    } else {
      // do nothing?
    }
  }
  
  /* for (i=0; i<MAXSIZE; ++i) { printf("%d: %d\n", i, histogram[i]); } */
  double scale_h = (double)histogram_height / max_wordcount;
  double scale_w = (double)histogram_width / max_wordcount;
  printf("Horizontal histogram: \n");
  for (i=1; i<=max_wordsize; ++i){
    printf("%2d: ", i);
    for (j=0; j < ((int) histogram[i]*scale_w); ++j){
      putchar('=');
    }
    putchar('\n');
  }

  printf("\nVertical histogram: \n");
  for (i=histogram_height; i>=0; --i){
    for (j=1; j<=max_wordsize; ++j){
      if (i==0){
        printf("%2d", j);
      } else if ((int)histogram[j]*scale_h >= i){
        putchar('#');
        putchar('#');
      } else {
        putchar(' ');
        putchar(' ');
      }
      putchar(' ');
    }
    putchar('\n');
  } 
  return 0;
}
