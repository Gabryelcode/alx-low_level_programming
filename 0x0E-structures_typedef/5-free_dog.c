#include "dog.h"
#include <stdio.h>
/**
 * free_dog - initializing dog
 * @d: struct d which recieves the pointer to the variables
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	free(d);
}
