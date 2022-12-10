#include <stdio.h>
/**
 * main - Main Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	char ch = 'a';

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
