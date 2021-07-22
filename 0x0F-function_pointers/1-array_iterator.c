#include <stddef.h>
#include "function_pointers.h"


/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
