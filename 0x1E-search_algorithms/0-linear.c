#include "search_algos.h"

/**
 * linear_search - function that searches for a
 * value in an array of integers using the Linear
 * search algorithmo
 * @array: pointer to the first element of the array to searchin
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
