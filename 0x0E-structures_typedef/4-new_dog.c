#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creating a new dog
 * @name: pointer to name
 * @age: receives age
 * @owner: pointer to owner
 * Return: a pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	if ((*d).name == NULL)
		return (NULL);
	if ((*d).owner == NULL)
		return (NULL);
	return (d);
}
