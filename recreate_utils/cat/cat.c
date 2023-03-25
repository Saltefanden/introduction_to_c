#include <stdio.h>

int main(int argc, char** argv){
  FILE *fp;
  void filecopy(FILE *, FILE *);
  if (argc == 1){
    filecopy(stdin, stdout);
  } else {
    while (--argc>0){
      if ((fp = fopen(*++argv, "r")) == NULL){
        printf("ERROR: Cannot open file %s\n", *argv);
        return 1;
      } else {
        filecopy(fp, stdout);
        fclose(fp);
      }
    }
  }
}
void filecopy(FILE *fpi, FILE *fpo){
  int c;
  while ( (c=getc(fpi)) != EOF ){
    putc(c, fpo);
  }
}
