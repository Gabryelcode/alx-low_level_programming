#include <stdio.h>
/**
 * print_times_table - prints the times table of an integer n
 * @n: receives the integer for multiplication
 *
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b == 0)
				{
					printf("%d", c);
				}
				if (c >= n || b != 0)
				{
					printf(",");
					printf(" ");
					printf("%d", c);
				}
			}
			printf("\n");
		}
	}
}
