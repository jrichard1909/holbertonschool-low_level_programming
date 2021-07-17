#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - prints the last digit of a number
 * @nmemb: The number to print
 * @siz: size
 *
 * Return: On success 1.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
