/**
 * _strpbrk - a function that returns a string
 *            if the index values are thesame
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the string if pointer accept is equal to s and returns NULL if otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
		return ('\0');
}
