#include "main.h"
/**
 * _pow_recursion - prints the power of an integer
 * @x: receives the integer
 * @y: receives the exponent
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
