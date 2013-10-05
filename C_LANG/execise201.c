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

	printf("char_min:%d\n", CHAR_MIN);
	printf("char_max:%d\n", CHAR_MAX);

	printf("mb_len_max:%d\n", MB_LEN_MAX);

	printf("shrt_min:%d\n", SHRT_MIN);
	printf("shrt_max:%d\n", SHRT_MAX);

	printf("ushrt_max:%d\n", USHRT_MAX);

	printf("int_min:%d\n", INT_MIN);
	printf("int_max:%ld\n", INT_MAX);

	printf("long_min:%ld\n", LONG_MIN);
	printf("long_max:%lu\n", LONG_MAX);

	printf("ulong_max:%lu\n", ULONG_MAX);
	return 0;
}	