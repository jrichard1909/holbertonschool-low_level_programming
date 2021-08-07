#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the last digit of a number
 * @h: pinter list_t
 *
 * Return: On success 1.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}

	return (count);
}
