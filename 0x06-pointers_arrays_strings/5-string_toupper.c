/**
 * string_toupper - changes a lowercase string to uppercase
 * @s: receives the pointer
 *
 * Return: the string
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
			s[a] = s[a] - 32;
	}
	return (s);
}
