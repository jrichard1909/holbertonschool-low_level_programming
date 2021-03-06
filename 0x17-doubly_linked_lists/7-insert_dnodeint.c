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

	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	temp = *h;
	while (temp->next)
	{
		if (count == idx - 1)
			break;
		count++;
		temp = temp->next;
	}
	if (count != idx - 1 || !temp)
		return (0);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (0);

	node->n = n;
	node->next = temp->next;
	if (temp->next)
		temp->next->prev = node;
	node->prev = temp;
	temp->next = node;

	if (idx == 1 && temp->next == NULL)
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}

	return (node);
}
