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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	positive_or_negative(n);

	return (0);
}
