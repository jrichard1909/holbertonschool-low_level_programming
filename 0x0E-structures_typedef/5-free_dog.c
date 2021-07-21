#include "dog.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 */


void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
