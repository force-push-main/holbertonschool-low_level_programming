#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 *
 * Description: gets address of node at index
 * @head: pointer to root node
 * @index: index of node to find
 * Return: address to found node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (!head)
		return (head);

	while (count < index)
	{
		if (head->next == NULL)
		{
			head = NULL;
			return (head);
		}
		head = head->next;
		count++;
	}

	return (head);
}
