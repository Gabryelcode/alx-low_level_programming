#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a variadic function that prints strings
 * with a seperator string
 * @separator: pointer to a string
 * @n: a constant variable of type int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	char *j;

	va_start(s, n);
	for (i = 0; i < n ; i++)
	{
		j = va_arg(s, char *);
		if (j)
			printf("%s", j);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
