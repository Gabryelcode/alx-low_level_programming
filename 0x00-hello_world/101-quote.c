#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the clause "and that piece of art is  useful - Dora Kprpa,  
 * 2015-10-19, with .a new line
 *
 * Return: Always  0  (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpa, 2015-10-19\n", 59);
	return (1);
}
