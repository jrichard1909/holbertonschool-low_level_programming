  
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: linked lsit
 *
 * Return: count.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);

	new->n = n;
	if (temp == NULL)
	{
		new->prev = temp;
		new->next = temp;
		*head = new;
		return (new);
	}

	new->next = temp;
	temp->prev = new;
	new->prev = NULL;
	*head = new;

	return (new);
}
