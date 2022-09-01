#include "search_algos.h"

/**
 * binary_search -  function that searches for a
 * value in an array of integers using the Binary
 * search algorithm
 * @array: pointer to the first element of the array to searchin
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (func_binary(array, value, 0, size - 1));
}

/**
 * func_binary - searches for a value in an array of
 * integers using recursion
 * @array: array to search the value in
 * @value: value to look for
 * @lo: index of the low bound
 * @hi: index of the high bound
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int func_binary(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	print_array(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (func_binary(array, value, mid + 1, hi));
	if (array[mid] > value)
		return (func_binary(array, value, lo, mid - 1));
	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @lo: index of the low bound
 * @hi: index of the high bound
 */
void print_array(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi)
			printf(", ");
	}
	printf("\n");
}
