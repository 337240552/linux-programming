#include <stdio.h>
/*count tab space and newline program*/
int main(int argc, char const *argv[])
{
	/* code */
	int tab = 0, space = 0, newline = 0;
	int ch;
	while((ch = getchar()) != EOF){
		if(ch == '\n'){
			++newline;
		}else if(ch == '\t'){
			++tab;
		}else if(ch == ' '){
			++space;
		}
	}
	printf("newline: %d\ttab: %d\tspace:%d\n", newline, tab, space);
	printf("%d\n", ' ');
	return 0;
}