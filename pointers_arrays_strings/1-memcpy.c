/**
 * _memcpy - Entry point
 *
 * Description: copy n number of bytes from src to dest
 * @src: origin of data to be copied
 * @dest: location to be copied to
 * @n: number of times/bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_start = dest;

	while (n--)
	{
		*dest = *src;

		dest++;
		src++;
	}

	dest = dest_start;

	return (dest);
}
