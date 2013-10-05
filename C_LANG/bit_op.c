#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
int setbits(int x, int p, int n, int y);

int main()
{

	int x = 15;
	printf("%x\n", x & 0177);

	int b = 0177;
	printf("%o\n", ~b);
	printf("getbits:%x\n", getbits(0x3c7, 0, 1));
	printf("%x\n", setbits(1023, 5, 3, 128));
}

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 - n)) & ~(~0 << n);
}

int setbits(int x, int p, int n, int y)
{
  //11 10 987654321
   //1  0 000000000
	n = n - 1;
	y = y & (~(~0 << n));//y's lower bits
	printf("y:%x\n", y);
	x = x & (~((~(~0 << n)) << (p - n + 1)));//x [p, p - n + 1] is 0
	printf("x:%x\n", x);
	x = x | (y << (p - n + 1));
	printf("x1:%x\n", x);
	return x;
}