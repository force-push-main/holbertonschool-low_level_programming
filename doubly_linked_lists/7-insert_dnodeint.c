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
	dlistint_t *new_node, *old_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	old_node = *h;

	while (idx > 1 && old_node)
	{
		old_node = old_node->next;
		idx--;
	}

	if (!old_node)
		return (NULL);

	if (!old_node->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->prev = old_node;
	new_node->next = old_node->next;
	old_node->next->prev = new_node;
	old_node->next = new_node;

	return (new_node);
}
