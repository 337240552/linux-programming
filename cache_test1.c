#include <stdio.h>

#ifndef SIZE
#define SIZE   1024 * 1024
#endif

int atoi(char s[]);
int lower(int c);

int main(int argc, char const *argv[])
{
	/* code */
	int i;
	int c = '\x56';
	char s[] = "12345789";
	atoi(s);

	printf("atoi:%d\n", atoi(s));
	printf("lower:%c\n", lower('X'));
	return 0;
}

int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] > '0' && s[i] <= '9'; ++i)
	{
		/* code */
		n = 10 * n + (s[i] - '0');
	}
	return n;
}

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}