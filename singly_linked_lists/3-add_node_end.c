#include "lists.h"

/**
 * add_node_end - Entry point
 *
 * Description: adds a node to end of list
 * @head: pointer to root node
 * @str: string to add to new head node
 * Return: address to new end node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr;
	int i;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	i = 0;

	while (str[i])
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	curr = *head;

	while (curr->next)
		curr = curr->next;

	curr->next = new_node;

	return (new_node);
}
