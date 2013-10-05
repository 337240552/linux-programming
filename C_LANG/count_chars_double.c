#include <stdio.h>

int main(int argc, char const *argv[])
{
	double nc;
	for(nc = 0; getchar() != EOF; ++nc){
		;
	}
	printf("%0.f\n", nc);

	int b = 1;
	printf("++b:%d\n", ++b);
	printf("b++:%d\n", b++);
	printf("b:%d\n", b);
	return 0;
}	