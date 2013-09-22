#include <stdio.h>

int bitcount(int i);

int main(int argc, char const *argv[])
{
	int n = bitcount(1024);
	printf("n:%d\n", n);
	printf("%x\n", (unsigned int) -1 );
	return 0;
}

int bitcount(int i)
{
	int count = 0;
	while(i)
	{
		count++;
		i &= (i - 1);
	}

	return count;
}

int bitcount2(unsigned int n)
{
	int count = 8 * sizeof(int);

	n ^= (unsigned int) -1;
	while (n)
	{
		count--;
		n &= (n - 1);
	}
	return count;
}

static int bits_in_char[256]

int bitcount3(unsigned int n)
{
	return bits
}