#include <stdio.h>
#include <stdarg.h>


int add(int x, int y);
int subtract(int x, int y);
int domath(int (*mathop)(int, int), int x, int y);

int main()
{
	int a = domath(add, 10, 2);
	printf("Add gives: %d\n", a);
add(1, 3);
	int b = domath(subtract, 10, 2);
	printf("subtract gives: %d\n", b);
	printf("%d\n", i);

}

int add(int x, int y)
{

	static int i;
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int domath(int (*mathop)(int, int), int x, int y)
{
	return (*mathop)(x, y);
}