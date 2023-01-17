#include "dog.h"
#include <stdio.h>
/**
 * free_dog - initializing dog
 *
 * @d: pointer to free dog
 *
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
