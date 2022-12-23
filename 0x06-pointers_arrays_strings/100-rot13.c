/**
 * rot13 - encodes an alphabetic character into the 13th alphabet
 * @s: receives the string array
 * Return: string
 */

char *rot13(char *s)
{
	int a, y;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char result[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[a] == data[y])
			{
				s[a] = result[y];
				break;
			}
		}
	}
	return (s);
}
