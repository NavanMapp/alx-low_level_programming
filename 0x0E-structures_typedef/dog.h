#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
* prototypes
*/

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /** DOG_H */
