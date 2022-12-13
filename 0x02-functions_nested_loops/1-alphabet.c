#include "main.h"
/**
 * main - Prints the comtent of function print_alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char x;
	for  (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
}

int main(void)
{
	print_alphabet();

	_putchar('\n');

	return (0);
}

