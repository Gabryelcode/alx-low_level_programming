#include "main.h"
/**
 * puts2 - prints the characters of a string
 * @str: receives the character
 *
 */
void puts2(char *str)
{
	int index;

	/*finds string length without null char*/
	for (index = 0; str[index] != '\0'; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
