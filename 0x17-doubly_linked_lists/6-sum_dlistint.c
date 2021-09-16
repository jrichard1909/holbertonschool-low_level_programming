#include "lists.h"

/**
 * sum_dlistint - returns the number of elements in a linked list
 * @head: linked lsit
 *
 * Return: sum
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
