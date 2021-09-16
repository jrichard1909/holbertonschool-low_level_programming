#include "lists.h"

/**
 * get_dnodeint_at_index - prints all the elements of a dlistint_t list
 * @head: linked lsit
 * @index: index of linked list
 *
 * Return: count.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		if (count == index)
		{
			node = head;
			break;
		}
		count++;
		head = head->next;
	}

	if (count != index)
		return (0);

	return (node);
}
