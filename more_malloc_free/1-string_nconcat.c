#include <stdlib.h>

/**
 * string_nconcat - Entry point
 *
 * Description: concats two strings up to n bytes of s2
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: number of bytes to concat s2
 * Return: concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len, s2Len, i, j;
	char *concatStr;

	s1Len = 0;
	s2Len = 0;

	if (!s2)
		s2 = "";
	while (s1[s1Len])
		s1Len++;
	while (s2[s2Len++])
		s2Len++;
	if (s2Len <= n)
	{
		concatStr = malloc(sizeof(char) * (s1Len + s2Len + 1));
		if (!concatStr)
			return (0);
		for (i = 0; i < s1Len; i++)
			concatStr[i] = s1[i];
		for (j = 0; j < s2Len; j++)
		{
			concatStr[i] = s2[j];
			i++;
		}
	}
	else
	{
		concatStr = malloc(sizeof(char) * (s1Len + n + 1));
		if (!concatStr)
			return (0);
		for (i = 0; i < s1Len; i++)
			concatStr[i] = s1[i];
		for (j = 0; j < n; j++)
		{
			concatStr[i] = s2[j];
			i++;
		}
	}
	concatStr[i] = '\0';
	return (concatStr);
}
