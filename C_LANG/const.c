#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void htoi(const char s[]);
char* squeeze( char s[], int c);
void strcat(char s[], char t[]);

int main(int argc, char const *argv[])
{
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	htoi("0xf9");
	sqrt(100);
	printf("%f\n", sqrt(21223));

	char s[] = "i am a students";
	char *s1 = squeeze(s, 's');
	printf("%s\n", s1);

	end = clock();

	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("elapsed time:%f\n", cpu_time_used);
	char a1[] = "this is string1\0                      ";
	char a2[] = "this is string2";

	strcat(a1, a2);
	printf("%s\n", a1);

	return 0;
}		

void strcat(char s[], char t[])
{
	int i, j;
	i = j = 0;
	while(s[i] != '\0')
		i++;
	printf("%d\n", i);
	while((s[i++] = t[j++]) != '\0')
		;
}
char* squeeze( char s[], int c)
{
	int i, j;

	for(i = j = 0; s[i] != '\0'; i++)
		if(s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
	return s;
}			

void htoi (const char s[])
{
	int i, n = 0;
	if(s[0] == '0' && tolower(s[i]) == 'x')
		i = 2;
	else
		i = 0;
	for (; s[i] != '\0'; ++i)
	{
		if (isdigit(s[i]))
			n = n * 16 + s[i] - '0';
		else if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f')
			n = n * 16 + 10 + tolower(s[i]) - 'a';

	}
	printf("%d\n", n);
}