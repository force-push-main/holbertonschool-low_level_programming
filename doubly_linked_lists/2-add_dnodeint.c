#include "lists.h"

/**
 * add_dnodeint - Entry point
 *
 * Description: adds a node to beginning of list
 * @head: pointer to root node
 * @n: int to add to new root node
 * Return: address to new root node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (*head);
}
