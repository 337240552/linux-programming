#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

char *(*strcpy_ptr)(char *dst, const char *src);

int main()
{
	//int foo;

	struct foo{
		char s;
		short i;
		int ab;
		
		long double a;
		
	};

	
	printf("%lu\n", sizeof(foo));
}