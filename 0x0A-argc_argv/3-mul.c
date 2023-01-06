#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if argument is two and 1 if argument is less than 2
 */
int main(int argc, char *argv[])
{
	int i, mul, m;

	mul = 1;
	if (argc > 1 && argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			m = atoi(argv[i]);
			mul *= m;
		}
		printf("%d\n", mul);
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
