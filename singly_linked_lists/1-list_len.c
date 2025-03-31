#include "lists.h"

/**
 * list_len - Entry point
 *
 * Description: counts number of nodes in list
 * @h: pointer to root node
 * Return: number of nodes in list
 */

size_t list_len(const list_t *h)
{
	const list_t *curr;
	size_t count;

	curr = h;
	count = 0;

	while (curr)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}
