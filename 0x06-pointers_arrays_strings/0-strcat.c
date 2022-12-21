#include "main.h"
/**
 * _strcat - concatenantes a string in another
 * @dest: receives the first string
 * @src: receives the second string
 *
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	int a, b, c, n;

	for (a = 0; dest[a]; a++)
		;
	for (b = 0; src[b]; b++)
		;
	for (c = 0; c < b; c++)
	{
		n = a++;
		dest[n] = src[c];
	}
	return (dest);
}
