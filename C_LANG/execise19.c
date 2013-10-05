#include <stdio.h>

int main(int argc, char const *argv[])
{
	int pc = EOF, c;
	bool isspace = false, continuous_space = false;
	while((c = getchar()) != EOF){
		if( c == ' ' && pc != ' ')
			putchar(c);

		if(c != ' ')
			putchar(c);
		pc = c;
	}
	return 0;
}