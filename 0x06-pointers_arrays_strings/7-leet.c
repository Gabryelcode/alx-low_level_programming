/**
 * leet - encodes a string to 1337
 * @s: receives the pointer
 *
 * Return: the string
 */
char *leet(char *s)
{
	int a, i;
	int s1[] = {97, 101, 111, 116, 108};
	int s2[] = {65, 69, 79, 84, 76};
	int new[] = {52, 51, 48, 55, 49};

	a = 0;
	while (s[a] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[a] == s1[i] || s[a] == s2[i])
			{
				s[a] = new[i];
				break;
			}
		}
		a++;
	}
	return (s);
}
