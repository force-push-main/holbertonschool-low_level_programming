#include "lists.h"
#include <stdio.h>

/**
 * print_list - Entry point
 *
 * Description: concats two strings up to n bytes of s2
 * @h: pointer to root node
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	char *to_print;
	const list_t *curr;
	unsigned len, count;

	curr = h;
	count = 0;

	while (curr != NULL)
	{
		if (curr->str == NULL)
		{
			to_print = "(nil)";
			len = 0;
		}
		else
		{
			to_print = curr->str;
			len = curr->len;
		}
		printf("[%i] %s\n", len, to_print);

		curr = curr->next;
		count++;
	}

	return (count);
}
