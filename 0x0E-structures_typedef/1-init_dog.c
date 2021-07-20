#include <stdlib.h>
#include "dog.h"

/**
 * init_do - prints the last digit of a number
 * @d: The number to print
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: On success 1.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
