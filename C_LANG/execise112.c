#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	int inspace = 0;
	while((c = getchar()) != EOF){
		if(c != ' '){
			inspace = 0;
			putchar(c);
		}else if(!inspace && (c == ' ' || c == '\t' || c =='\n')){
			inspace = 1;
			putchar('\n');
		}
	}
	return 0;
}