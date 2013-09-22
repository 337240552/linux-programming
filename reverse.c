#include <stdio.h>

#ifndef MAXLEN
#define MAXLEN 1100
#endif

int sayhello();

int main(int argc, char const *argv[])
{
	/* code */
	char line[MAXLEN] = {'A', 'b', 'c', '\0'};
	char dst[MAXLEN];
	int i;
	extern int max;
	max = 13;
	sayhello();
	for (i = 0; line[i] != '\0'; i++)
	{
		/* code */
		printf("before:%d\n", i);
		dst[i] = line[i];
		printf("after:%d\n", i);
	}
	printf("finnal:%d\n", i);
	dst[i] = '\0';
	printf("%s\n", dst);

	return 0;
}

int sayhello(){
	printf("external: %d\n", max);
}