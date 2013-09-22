#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

void minprintf(char *format, ...);

int main(int argc, char const *argv[])
{
	int c = 1;
	 char p[] = "humingchun";
	// while ((c = getchar()) != EOF)
	// 	putchar(tolower(c));
	minprintf("%d is %s\n", c, p);
	return 0;
}

void minprintf(char *fmt, ...)
{
	va_list ap;/*points to each unnamed arg in turn*/
	char *p, *sval;
	int ival;
	double dval;

	va_start(ap, fmt);/*make ap point to 1st unamed arg*/
	for (p = fmt; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}

		switch (*++p)
		{
			case 'd':
				ival = va_arg(ap, int);
				printf("%d\n", ival);
				break;
			case 's':
				for (sval = va_arg(ap, char *); *sval; sval++)
					putchar(*sval);
				break;
			default:
				putchar(*p);
				break;
		}
	}
}