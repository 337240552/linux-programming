#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%d\n", getchar() != EOF);
	printf("%d\n", EOF);
	return 0;
}