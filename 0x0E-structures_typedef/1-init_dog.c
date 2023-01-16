#include "dog.h"

/**
 * init_dog - initializing dog
 * @d: pointer to struct dog
 * @name: pointer to name
 * @age: receives age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float *age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
