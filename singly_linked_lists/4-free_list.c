#include "lists.h"

/**
 * free_list - Entry point
 *
 * Description: adds a node to end of list
 * @head: pointer to root node
 * Return: returns void
 */

void free_list(list_t *head)
{
	list_t *prev, *curr;

	curr = head;

	while (curr)
	{
		prev = curr;
		curr = curr->next;
		free(prev->str);
		free(prev);
	}
}
