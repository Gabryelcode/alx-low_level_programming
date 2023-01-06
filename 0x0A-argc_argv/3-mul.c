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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
