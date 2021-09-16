#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: linked lsit
 *
 * Return: count.
 */

size_t print_dlistint(const dlistint_t *h)
{
	/*dlistint_t temp = h;*/
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
