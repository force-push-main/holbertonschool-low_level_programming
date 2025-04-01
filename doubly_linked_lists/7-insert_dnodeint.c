#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point
 *
 * Description: adds new node at index
 * @h: pointer to root node
 * @idx: index for new node
 * @n: int to add to new node
 * Return: address to found node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr, *prev;

	if (idx == 0)
		return (add_dnodeint(h, n));

	curr = *h;

	while (idx > 0 && curr)
	{
		prev = curr;
		curr = curr->next;
		idx--;
	}

	if (!curr && idx > 0)
		return (NULL);

	if (!curr->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = prev;
	new_node->next = curr;
	curr->prev = new_node;
	prev->next = new_node;
	return (new_node);
}
