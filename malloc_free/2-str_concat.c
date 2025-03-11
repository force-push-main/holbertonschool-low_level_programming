#include <stdlib.h>

/**
 * str_concat - Entry point
 *
 * Description: concats two strings and returns pointer
 * @s1: first string
 * @s2: second string
 * Return: ptr to new string or null if failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	i = 0;
	j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;

	while (s2[j])
		j++;
	ptr = malloc(sizeof(char) * (i + j + 1));

	if (!ptr)
		return (0);

	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
