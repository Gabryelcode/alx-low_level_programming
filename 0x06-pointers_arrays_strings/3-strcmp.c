/**
 * _strcmp - compares two strings and returns a value
 * @s1: receives the first string
 * @s2: receives the second string
 *
 * Return: an integer if condition is met
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (a < b)
		return (-15);
	else if (a > b)
		return (15);
	else if (a == b)
		return (0);
}
