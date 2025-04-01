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
	
	count = 0;

	while (count < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		count++;
	}

	return (head);
}
