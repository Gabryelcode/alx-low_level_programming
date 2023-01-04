/**
 * factorial - prints tge factorial of an integer n
 * @n: receives the integer
 * Return: an integer
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n-1));
}
