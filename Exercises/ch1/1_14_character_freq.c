#include <stdio.h>

int main(){
  int c;
  int plot_width = 30;
  int n_ascii = 128;
  int char_counts[n_ascii];
  int plot_fractions[n_ascii];

  for (int i=0; i<n_ascii; i++){
    char_counts[i] = 0;
  }

  /* Read characters from stream, update total and individual counts */
  int total_chars = 0;
  while ((c = getchar()) != EOF){
    char_counts[c]++;
    total_chars++;
  }

  /* Find the max count */
  int max = 0;
  for (int i=0; i<n_ascii; ++i){
    if (char_counts[i]>max){
      max = char_counts[i];
    }
  }

  /* Calculate fractions for plotting */
  for (int i=0; i<n_ascii; ++i){
    plot_fractions[i] = (float)char_counts[i]/max * plot_width;
  }

  /* Plot histgram */
  for (int i=0; i<n_ascii; ++i){
    if (char_counts[i]==0){
      continue;
    }
    if (i=='\t'){
      printf("%-9s |", "\\t");
    } else if (i ==' '){
      printf("%-9s |", "space");
    } else if (i =='\n'){
      printf("%-9s |", "newline");
    } else if (i=='\n' || i == n_ascii-1 || (i>=0 && i<' ')){
      printf("%-9d |", i);
    } else {
      printf("%-9c |", i);
    }
    
    /* Plot the bar of the histgram */
    for (int j=0; j<plot_fractions[i]; ++j){
      putchar('=');
    }

    /* Add necessary whitespace for shorter bars */
    for (int j=0; j<12+plot_width-plot_fractions[i]; ++j){
      putchar(' ');
    }

    printf("%d/%.d\n", char_counts[i], total_chars);
  }
}
