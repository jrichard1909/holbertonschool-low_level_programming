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
		name2 = malloc(_strlen_recursion(name) + 1);
                if (name2 == NULL)
		{
			free(name2);
                        return (0);
		}
		newdog->name = _strncpy(name2, name);
	}
	newdog->age = age;
	if (owner != NULL)
	{
		owner2 = malloc(_strlen_recursion(owner) + 1);
		if (owner2 == NULL)
		{
			free(name2);
			free(owner2);
			return (0);
		}
		newdog->owner = _strncpy(owner2, owner);
	}

	return(newdog);
}

char *_strncpy(char *dest, char *src)
{
	int count2;
	int n = _strlen_recursion(src);

	for (count2 = 0; count2 < n; count2++)
	{
		dest[count2] = src[count2];
	}

	dest[count2] = '\0';

	return (dest);
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
