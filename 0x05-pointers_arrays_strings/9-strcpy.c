/**
 * _strcpy - copies the string of an array to another
 * @dest: second pointer that gets the copy of the first pointer
 * @src: the first array that is copied
 *
 * Return: charater in variable dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i =  0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
