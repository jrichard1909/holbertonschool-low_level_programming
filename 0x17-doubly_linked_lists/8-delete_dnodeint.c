#include "lists.h"

/**
 * delete_dnodeint_at_index - prints all the elements of a dlistint_t list
 * @head: linked lsit
 * @index: data
 *
 * Return: count.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_head = *head;
	unsigned int count = 0;

	while (new_head)
	{
		if (index == 0)
		{
			if (new_head->next)
				new_head->next->prev = NULL;
			*head = new_head->next;
			free(new_head);
			return (1);
		}

		if (count == index)
			break;
		count++;
		new_head = new_head->next;
	}
	if (count != index || (count == 0 && !new_head))
		return (-1);
	if (new_head->prev)
		new_head->prev->next = new_head->next;
	if (new_head->next)
		new_head->next->prev = new_head->prev;
	free(new_head);

	return (1);
}
