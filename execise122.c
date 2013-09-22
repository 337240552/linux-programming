#include <stdio.h>

#ifndef MAX_LINE
#define MAX_LINE 2000
#endif

#ifndef MAX_LEN
#define MAX_LEN 10
#endif

void pretty_print(char line[], int len);
void print(char line[], int start, int end);
bool isspace(char ch);
/**
 *return the non space char index
 **/
int backtrack(char line[], int start);

int main(int argc, char const *argv[])
{
	int i, c;
	char line[MAX_LINE];

	i = 0;
	while((c = getchar()) != EOF && c != '\n')
		line[i++] = c;

	line[i] = '\0';
	printf("count:%d, inputline:%s\n", i, line);

	pretty_print(line, i);

	return 0;
}

void pretty_print(char long_line[], int len){
	int i, line_no;

	line_no = 0;

	line_no = len / MAX_LEN;
	for (i = 1; i <= line_no; ++i)
		print(long_line, (i - 1) * MAX_LEN, i * MAX_LEN);
	
	if(len % MAX_LEN >= 0)
		print(long_line, (i - 1) * MAX_LEN, len);
	
}

bool isspace(char ch){
	return ch == ' ' || ch == '\t';
}
/**
*len the sub string that will be backtracked
**/
int backtrack(char line[], int len){
	int i;
	for(i = len; i >= 0; i--)
		if(!isspace(line[i]))
			break;
	return i;
}

void print(char line[], int start, int end){
	int i;
	end = backtrack(line, end);
	//printf("start:%d end:%d\n", start, end);
	for(i = start; i <= end; i++)
		putchar(line[i]);
	
	putchar('\n');
}

