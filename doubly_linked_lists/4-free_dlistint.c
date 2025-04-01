#include "lists.h"

/**
 * free_dlistint - Entry point
 *
 * Description: frees list
 * @head: pointer to root node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		if (head->prev)
			free(head->prev);
		if (!head->next)
		{
			free(head);
			return;
		}
		head = head->next;
	}
}
