#include "main.h"
/**
 * puts_half - prints half of the characters of a string
 * @str: receives the character
 *
 */
void puts_half(char *str)
{
	int length, i, n, j;

	/*finds string length without null char*/
	for (length = 0; str[length] != '\0'; length++)
		;
	if (length % 2 == 0)
	{
		j = length / 2;
		for (i = j; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (length - 1) / 2;
		for (i = n + 1; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
