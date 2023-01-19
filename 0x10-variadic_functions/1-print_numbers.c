#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a variadic function that prints all numbers included
 * with a seperator string
 * @separator: pointer to a string
 * @n: a constant variable of type int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	int j;

	va_start(s, n);
	for (i = 0; i < n ; i++)
	{
		j = va_arg(s, int);
		printf("%d", j);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(s);
	printf("\n");
}
