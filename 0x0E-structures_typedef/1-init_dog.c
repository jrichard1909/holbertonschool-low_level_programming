#include <stdlib.h>
#include "dog.h"
#include <stddef.h>

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
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
