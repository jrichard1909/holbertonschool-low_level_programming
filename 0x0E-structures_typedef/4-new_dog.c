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
	char *name2, *owner2;

       	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (0);
	if (name != NULL)
	{
	name2 = _strdup(name);
	newdog->name = name2;
	}
	newdog->age = age;
	if (owner != NULL)
	{
	owner2 = _strdup(owner);
	newdog->owner = owner2;
	}

	return(newdog);
}

char *_strdup(char *str)
{
	int n = _strlen_recursion(str), i;
	char *s;

	s = malloc(n);
	if (s == NULL)
		return (0);
	for (i = 0; i < n; i++)
		s[i] = str[i];

	return (s);
}


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
