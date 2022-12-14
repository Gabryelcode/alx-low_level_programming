#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - prints positive or negative number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	positive_or_negative(i);

	return (0);
}
