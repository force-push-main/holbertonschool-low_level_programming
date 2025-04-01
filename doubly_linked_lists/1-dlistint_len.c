#include "lists.h"

/**
 * dlistint_len - Entry point
 *
 * Description: returns number of nodes in list
 * @h: pointer to root node
 * Return: number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t count;

	curr = h;
	count = 0;

	while (curr)
	{
		curr = curr->next;
		count++;
	}
	return (count);
}
