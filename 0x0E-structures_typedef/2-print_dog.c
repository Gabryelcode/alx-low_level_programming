#include "dog.h"
#include <stdio.h>
/**
 * print_dog - initializing dog
 * @d: struct d which recieves the pointer to the variables
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");

		/*checks if pointer to struct name is NULL*/
		if ((*d).name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: ");

		/*checks if pointer to struct owner is NULL*/
		if ((*d).owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", (*d).owner);
	}
}
