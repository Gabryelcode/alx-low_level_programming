#include <stdlib.h>
/**
 * malloc_checked - assign a memory
 * @b: receives an integer value
 * Return: a pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
