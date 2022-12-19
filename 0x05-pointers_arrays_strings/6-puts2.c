#include <stdio.h>
/**
 * puts2 - prints the characters of a string
 * @str: receives the character
 *
 */
void puts2(char *str)
{
	int index = 0, l;

	/*finds string length without null char*/
	while (str[index] != '\0')
		index++;
	/*swaps the string by looping to half the string*/
	for (l = 0; l < index; l++)
	{
		if (l == 0)
			printf("%c", str[l]);
		else if (l > 0 && str[l] % 2 == 0)
			printf("%c", str[l]);
	}
	printf("\n");
}
