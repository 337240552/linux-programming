#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;

	while((c = getchar()) != EOF){
		if(c == '\t'){
			putchar('\\');
			putchar('t');
		}else if(c == '\n'){
			putchar('\\');
			putchar('n');
		}else{
			putchar(c);
		}
			
	}
	return 0;
}