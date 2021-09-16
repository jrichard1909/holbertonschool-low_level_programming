#include "lists.h"

/**
 * insert_dnodeint_at_index - prints all the elements of a dlistint_t list
 * @h: linked lsit
 * @idx: index of linked list
 * @n: data
 *
 * Return: count.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	temp = *h;
	while (temp)
	{
		if (count == idx)
			break;

		count++;
		temp = temp->next;
	}

	if (count != idx)
		return (0);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (0);

	node->n = n;
	node->next = temp->next;
	node->prev = temp->prev;
	temp->prev = node;
	temp->next = node;

	return (node);
}
