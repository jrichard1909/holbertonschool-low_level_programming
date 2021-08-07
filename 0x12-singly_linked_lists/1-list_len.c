#include <stddef.h>
#include "lists.h"

/**
 * list_len - prints the last digit of a number
 * @h: pinter list_t
 *
 * Return: On success 1.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
