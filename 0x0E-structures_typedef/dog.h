#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type struct for dog
 * @name: receives the dog's name
 * @age: receives the dog's age
 * @owner: receives the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*New type name for struct dog as dog_t*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
