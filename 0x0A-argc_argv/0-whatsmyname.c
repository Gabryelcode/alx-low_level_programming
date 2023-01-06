#include "main.h"
/**
 * main - prints the name of this program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *v;

	for (i = 0; i < argc; i++)
	{
		v = argv[i];
	}

	for (i = 0; v[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		_putchar(v[j]);
	}
	_putchar('\n');
	return (0);
}
