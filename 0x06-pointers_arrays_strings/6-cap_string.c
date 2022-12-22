/**
 * cap_string - capitalizes all first letter of words of a string
 * @s: receives the pointer
 *
 * Return: the string
 */
char *cap_string(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			if (a == 0)
				s[a] = s[a] - 32;
			if (s[a - 1] == 32 || s[a - 1] == 44 || s[a - 1] == 59 ||
					s[a - 1] == 46 || s[a - 1] == 33 || s[a - 1] == 34 ||
					s[a - 1] == 10 || s[a - 1] == 63 || s[a - 1] == 40 ||
					s[a - 1] == 41 || s[a - 1] == 123 || s[a - 1] == 125 ||
					s[a - 1] == 9)
			{
				s[a] = s[a] - 32;
			}
		}
	}
	return (s);
}
