#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the entry result
 * 
 * Returns: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 25-10-19\n", 59);
	return (1);
}