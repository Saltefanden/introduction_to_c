#include <stdio.h>

int main(){
  int c;
  int max_wordlength = 15;
  int plot_width = 30;
  int current_word = 0;
  int word_lengths[max_wordlength-1];
  int plot_fractions[max_wordlength-1];

  for (int i=0; i<max_wordlength; i++){
    word_lengths[i] = 0;
  }

  /* Count words */
  while ((c = getchar()) != EOF){
    if (c == ' ' || c == '\n' || c == '\t'){
      word_lengths[current_word - 1]++;
      current_word=0;
    } else {
      current_word++;
      if (current_word > max_wordlength){
        current_word--;
      }
    }
  }

  /* Count grand total */
  int total = 0;
  for (int i=0; i<max_wordlength; ++i){
    total += word_lengths[i];
  }

  /* Find the max value */
  int max = 0;
  for (int i=0; i<max_wordlength; ++i){
    if (word_lengths[i]>max){
      max = word_lengths[i];
    }
  }

  /* Calculate fractions for plotting */
  for (int i=0; i<max_wordlength; ++i){
    plot_fractions[i] = (float)word_lengths[i]/max * plot_width;
  }

  /* Plot histgram */
  for (int i=0; i<max_wordlength; ++i){
    if (i!=max_wordlength-1){
      printf("Length %-12.d |", i+1);
    } else {
      printf("Length %-2.d and above |", i+1);
    }
    
    /* Plot the bar of the histgram */
    for (int j=0; j<plot_fractions[i]; ++j){
      putchar('=');
    }

    /* putchar(']'); */

    /* Add necessary whitespace for shorter bars */
    for (int j=0; j<12+plot_width-plot_fractions[i]; ++j){
      putchar(' ');
    }

    printf("%d/%.d\n", word_lengths[i], total);
  }
}
