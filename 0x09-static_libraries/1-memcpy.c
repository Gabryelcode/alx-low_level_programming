/**
 * _memcpy - a function that copies
 *         memory of a constant byte to another memory area
 *
 * @dest: input pointer to char type
 *    represents the pointer to the
 *    block of memory to fill
 * @src: input pointer to char type
 *    represents the memory source to
 *    fill dest
 * @n: unsigned int variable
 *    the number of bytes to be filled
 *
 * Return: A pointer to the filled memory
 *         area @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
