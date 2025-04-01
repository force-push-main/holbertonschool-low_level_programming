#include "lists.h"

/**
 * sum_dlistint - Entry point
 *
 * Description: sums n in all nodes
 * @head: pointer to root node
 * Return: address to found node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
