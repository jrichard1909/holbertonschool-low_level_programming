#include <stdlib.h>
#include "dog.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

       	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (0);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return(newdog);
}
