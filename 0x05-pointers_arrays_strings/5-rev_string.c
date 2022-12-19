/**
 * rev_string - reverses a string
 * @s: receives the character
 *
 */
void rev_string(char *s)
{
	int index = 0, l;
	char chr;

	/*finds string length without null char*/
	while (s[index] != '\0')
		index++;
	/*swaps the string by looping to half the string*/
	for (l = 0; l < index / 2; l++)
	{
		chr = s[l];
		s[l] = s[index - 1 - l];
		s[index - 1 - l] = chr;
	}
}
