#include "lists.h"

/**
 * free_dlistint - returns the number of elements in a linked list
 * @head: linked lsit
 *
 * Return: count.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
