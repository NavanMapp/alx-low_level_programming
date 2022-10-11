#include "main.h"
#include "dog.h"
/**
 * dog - struct definition
 * dog_t - struct variable
 * @name: variable
 * @age: variable
 * @owner: variable of struct
 * Return: 0
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
/**
 * init_dog - function that initialises a struct
 * @d: variable for struct
 * @name: struct variable
 * @age: struct variable
 * @owner: struct variable
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
