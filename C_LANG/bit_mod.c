#include <stdio.h>

int strlen(const char s[]);
int main(int argc, char const *argv[])
{
	int i ;
	printf("\b %d\n", i);
    const char ch[] = {'I', 'a', 'm', 'a', 's', '\0', 'd'};
    const char *s = "hello";
    printf("len ch:%d\n", strlen(ch));
    printf("len s:%d\n", strlen(s));
	return 0;
}

int strlen(const char s[]){
	int i = 0;

	while(s[i] != '\0'){
		++i;
	}
	return i;
}