#include <stdio.h>
/**
 * main - Main Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, l;

	for (m = 48; m < 58; m++)
	{
		for (n = 49; n < 57; n++)
		{
			for (l = 50; l <= 57; l++)
			{
				if (n > m && l > n)
				{
					putchar(m);
					putchar(n);
					putchar(l);
					if (m != 55 || n != 56)
					{
					putchar(',');
putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
