#include "lists.h"

/**
 * add_dnodeint_end - Entry point
 *
 * Description: adds a node to end of list
 * @head: pointer to root node
 * @n: int to add to new head node
 * Return: address to new end node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	last = *head;

	while (last->next)
		last = last->next;

	new->prev = last;
	last->next = new;

	return (*head);
}
