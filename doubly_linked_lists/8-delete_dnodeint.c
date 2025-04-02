#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry point
 *
 * Description: deletes node at index
 * @head: pointer to root node
 * @index: index for new node
 * Return: 1 if deleted -1 if error
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;

	if (!*head)
		return (-1);

	curr = *head;

	if (!curr->next && !curr->prev)
	{
		*head = NULL;
		free(curr);
		return (1);
	}
	if (index == 0)
	{
		curr->next->prev = NULL;
		*head = curr->next;
		free(curr);
		return (1);
	}
	while (index > 0)
	{
		curr = curr->next;
		if (!curr)
			return (-1);
		index--;
	}
	if (!curr->next)
	{
		curr->prev->next = NULL;
		free(curr);
		return (1);
	}
	curr->next->prev = curr->prev;
	curr->prev->next = curr->next;
	free(curr);

	return (1);
}
