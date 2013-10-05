#include <stdio.h>
#include <stdlib.h>

typedef int length;

union u_tag {
	int ival;
	float fval;
	char *sval;
};

struct 
bit_field {
	unsigned int is_keyword : 1;
	unsigned int is_extern : 1;
	unsigned int is_static : 1;
} flags;



int main(int argc, char const *argv[])
{
	u_tag a;
	a.ival = 1;
	flags.is_static = flags.is_extern = 1;
	if (flags.is_extern)
	printf("%lu, %d\n", sizeof(u_tag), a.ival);
	return 0;
}	