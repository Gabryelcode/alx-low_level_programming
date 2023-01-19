#include <stdarg.h>
/**
 * sum_them_all - a variadic function that sums all included arguments of
 * contiguous types
 * @n: a constant variable of type int
 * Return: sum value if n is not equal to zero and 0 if n is equal to zero
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i, sum = 0;

	if (n != 0)
	{
		va_start(s, n);
		for (i = 0; i < n ; i++)
		{
			sum = sum + va_arg(s, int);
		}
		va_end(s);
		return (sum);
	}
	return (0);
}
