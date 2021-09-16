#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: linked lsit
 *
 * Return: count.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
