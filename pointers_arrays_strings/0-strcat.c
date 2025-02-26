/**
 * _strcat - Entry point
 *
 * Description: returns concat string
 * @dest: original string
 * @src: string to append
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	dest = start;

	return (dest);
}
