#include <stdio.h>
#include <unistd.h>
/**
 * main - prints and that piece of art is useful -
 * Dora Korpar, 2015-10-19
 * folowed by a new line
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
