#include <stdio.h>

typedef unsigned int uint_32_t;

void inet_ntoa(uint_32_t in)
{
	char b[18];
	register char *p;
	p = (char *)&in;
	//printf("p: %s\n", p);
	//#define UC(b) (((int)b) & 0xff)
	//sprintf(b, "%d.%d.%d.%d\n", UC(p[0]), UC(p[1]), UC(p[2]), UC(p[3]));
sprintf(b, "%d.%d.%d.%d\n", p[0], p[1], p[2], p[3]);
	printf("%s", b);
}

int main(int argc, char const *argv[])
{
	inet_ntoa(0x12345678);
	inet_ntoa(0x87654321);
	return 0;
}