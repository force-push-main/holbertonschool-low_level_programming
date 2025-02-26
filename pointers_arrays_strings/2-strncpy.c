/**
 * _strncpy - Entry point
 *
 * Description: copies string to dest
 * @dest: buffer to hold string
 * @src: string to be copied
 * @n: number of bytes to be copied
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i;

	i = 1;

	while (i <= n && *dest)
	{
		if (*src)
		{
			*dest = *src;
			src++;
		}
		else
			*dest = '\0';
		dest++;
		i++;
	}

	dest = start;

	return (dest);
}
