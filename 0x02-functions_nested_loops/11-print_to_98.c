#include "main.h"
/**
 * print_to_98 - prints natural numbers from integer n to 98
 * @n: receives the integer
 *
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			_putchar(a);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			_putchar(a);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
