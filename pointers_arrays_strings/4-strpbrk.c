/**
 * __strpbrk - Entry point
 *
 * Description: returns pointer for first occurance of char in string
 * @s: string to be searched
 * @accept: chars to be matched
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if(*s == accept[i])
				return (s);
		i++;
		}

		i = 0;
		s++;
	}


	return (0);
}
