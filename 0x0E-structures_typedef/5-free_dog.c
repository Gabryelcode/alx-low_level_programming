#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - initializing dog
 *
 * @d: pointer to free dog
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
