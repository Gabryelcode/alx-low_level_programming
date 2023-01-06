#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, v;

	for (i = 0; i < argc; i++)
		v = i;
	printf("%d\n", v);
	return (0);
}
