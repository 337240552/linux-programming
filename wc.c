#include <stdio.h>

#ifndef IN
#define IN 1 /*inside a word*/
#endif

#ifndef OUT
#define OUT 0 /*outside a word*/
#endif

int main(int argc, char const *argv[])
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF){
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d\n", nl, nw, nc);
	return 0;
}