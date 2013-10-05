#include <stdio.h>

#ifndef WORD_MAX
#define WORD_MAX 10
#endif

#ifndef IN
#define IN 1
#endif

#ifndef OUT
#define OUT 0
#endif


int main(int argc, char const *argv[])
{
	int c, i;
	int status, len, max_len;
	int words_static[WORD_MAX];

	max_len = len = 0;
	status = OUT;

	for(i = 0; i < WORD_MAX; i++){
		words_static[i] = 0;
	}

	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			++words_static[len > 9 ? 9 : len - 1];
			max_len = len > max_len ? len : max_len;
			len = 0;
		}else {
			len++;
		}
	}
	printf("words:");
	for(i = 0; i < WORD_MAX; i++){
		printf(" %d", words_static[i]);
	}

	for(i = 0; i < WORD_MAX; i++){
		for(int j = 0; j < max_len; j++){
			
		}
	}

	return 0;
}	