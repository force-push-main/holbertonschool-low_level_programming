/**
 * _strstr - Entry point
 *
 * Description: finds first instance of substring in string
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to where needle exists or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, is_found;

	i = 0;
	is_found = 0;

	while (*haystack)
	{
		while (needle[i])
		{
			if (haystack[i] == needle[i])
				is_found = 1;
			else
				is_found = 0;
			i++;
		}
		if (is_found)
			return (haystack);
		i = 0;
		haystack++;
	}

	return (0);
}
