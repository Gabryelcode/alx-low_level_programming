/**
 * print_last_digit - prints the last digit of a number
 * @x: receives the number
 *
 * Return: the last digit
 */

#include "main.h"

int print_last_digit(int x)
{
	_putchar((x % 10) + '0');
	return (x % 10);
}
