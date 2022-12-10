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
		for (n = 49; n < 58; n++)
		{
			for (l = 50; l < 58; l++)
			{
				if (n > m)
				{
					putchar(m);
					putchar(n);
					putchar(l);
					if (m != 56 || n != 57 || l != 58)
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
