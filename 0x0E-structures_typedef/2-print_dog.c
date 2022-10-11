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
 * print_dog - function that prints struct dog
 * @d: dog variable
 * Return: null
 */
void print_dog(struct dog *d)
{
if (!d->name && !d->age && !d->owner)
{
printf("nil");
}
else
printf("%s\n", d->name);
printf("%f\n", d->age);
printf("%s\n", d->owner);
}
