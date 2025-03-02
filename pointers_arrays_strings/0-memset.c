/**
 * memset - Entry point
 *
 * Description: stored char b n number of times in s
 * @s: address for b to be stored
 * @b: var to be stored
 * @n: number of times/bytes to be stored
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s = b;
		s++;
	}

	return (s);
}
