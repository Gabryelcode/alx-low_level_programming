/**
 * _strlen - Prints the length of string
 * @s: receives the character
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;

	return (count);
}
