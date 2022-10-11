#include "dog.h"
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
