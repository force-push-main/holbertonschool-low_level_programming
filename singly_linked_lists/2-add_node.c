#include "lists.h"
#include <stdlib.h>

/**
 * add_node - Entry point
 *
 * Description: adds a node to beginning of list
 * @head: pointer to root node
 * @str: string to add to new head node
 * Return: address to new head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	int i;

	new_head = malloc(sizeof(list_t));

	if (!new_head)
	{
		free(new_head);
		return (NULL);
	}

	i = 0;

	while (str[i])
		i++;

	new_head->str = strdup(str);
	new_head->len = i;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
