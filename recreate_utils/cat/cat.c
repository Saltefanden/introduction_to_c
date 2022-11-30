#include <stdio.h>

int main(int argc, char *argv[]){
	if (argc==1) {
		int c=0;
		while( (c=getchar()) != EOF ){
			putchar(c);
			putchar(c);
		}
	} else {
		printf("%s", argv[1]);
	}
	
}
