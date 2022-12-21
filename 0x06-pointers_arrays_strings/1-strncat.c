#include "main.h"
/**
 * _strncat - concatenantes a string in another
 * @dest: receives the first string
 * @src: receives the second string
 * @n: receives the n bytes
 *
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, c, d, l;

	for (a = 0; dest[a]; a++)
		;
	for (b = 0; src[b]; b++)
		;
	l = b - (b - n);
	for (c = 0; c < l && src[c] != '\0'; c++)
	{
		d = a++;
		dest[d] = src[c];
	}
	return (dest);
}
