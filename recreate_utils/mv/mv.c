#include <stdio.h>


int main(int argc, char** argv){
  if (argc != 3){
    printf("Du er en lort hvis du ikke bruger det her program rigtigt\n");
    return 1;
  }
  return rename(argv[1], argv[2]);
}
