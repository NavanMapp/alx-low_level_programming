#include "dog.h"
/**
 * print_dog - function that prints struct dog
 * @d: dog variable
 * Return: null
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("%s\n", (d->name) ? d->name : "(nil)");
printf("%f\n", (d->age) ? d->age : 0);
printf("%s\n", (d->owner) ? d->owner : "(nil)");
}
}
