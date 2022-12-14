#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}  /* No iteration before the closing braces of the while loop */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
