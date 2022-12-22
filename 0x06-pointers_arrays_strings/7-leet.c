/**
 * leet - capitalizes all first letter of words of a string
 * @s: receives the pointer
 *
 * Return: the string
 */
char *leet(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == 97)
			s[a] = s[a] - 45;
		else if (s[a] == 65)
			s[a] = s[a] - 13;
		else if (s[a] == 101)
			s[a] = s[a] - 50;
		else if (s[a] == 69)
			s[a] = s[a] - 18;
		else if (s[a] == 111)
			s[a] = s[a] - 63;
		else if (s[a] == 79)
			s[a] = s[a] - 31;
		else if (s[a] == 116)
			s[a] = s[a] - 61;
		else if (s[a] == 84)
			s[a] = s[a] - 29;
		else if (s[a] == 108)
			s[a] = s[a] - 59;
		else if (s[a] == 76)
			s[a] = s[a] - 27;
	}
	return (s);
}
