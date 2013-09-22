#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	/* code */
	// signed char a = 126, b = 127, c = 128, d = 129;
	// printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	
	printf("char_bit:%d\n", CHAR_BIT);
	printf("schar_min:%d\n", SCHAR_MIN);
	printf("schar_max:%d\n", SCHAR_MAX);
	printf("uchar_max:%d\n", UCHAR_MAX);
	return 0;
}	