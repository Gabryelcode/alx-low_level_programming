/**
 * _strlen_recursion - prints the length of a string
 * @s: receives the string
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
