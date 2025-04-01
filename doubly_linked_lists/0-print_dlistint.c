#include "lists.h"

/**
 * print_dlistint - Entry point
 *
 * Description: adds a node to end of list
 * @h: pointer to root node
 * Return: address to new end node
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t count;

	curr = h;
	count = 0;

	while (curr)
	{
		printf("%i\n", curr->n);
		curr = curr->next;
		count++;
	}
	return (count);
}
