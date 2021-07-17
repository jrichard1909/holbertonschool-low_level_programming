#include <stdlib.h>
#include "holberton.h"

/**
 * array_range- prints the last digit of a number
 * @min: min
 * @ma: max
 *
 * Return: On success 1.
 */

int *array_range(int min, int max)
{
	int *p, i, num = (max - min + 1);

	if (min > max) 
		return (0);

	p = malloc(num * sizeof(int));
	if (p == NULL)
		return (0);

	for (i = 0; i < num; i++)
		p[i] = min + i;

	return (p);
}
