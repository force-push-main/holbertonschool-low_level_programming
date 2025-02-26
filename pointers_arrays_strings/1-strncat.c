/**
 * _strncat - Entry point
 *
 * Description: concat n bytes of string to dest
 * @dest: buffer to hold string
 * @src: string to be stored
 * @n: number of bytes to use
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *start = dest;

	i = 1;

	while (*dest)
	{
		dest++;
	}

	while (i <= n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	dest = start;

	return (dest);
}
