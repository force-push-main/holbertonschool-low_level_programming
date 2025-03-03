/**
 * _strchr - Entry point
 *
 * Description: locates character in string
 * @s: string to be searched
 * @c: character to be found
 * Return: pointer to where c is or null if not found
 */

char *_strchr(char *s, char c)
{
	char *res;

	while (*s)
	{
		if (*s == c)
		{
			res = s;
			break;
		}
		s++;
	}

	return (res);
}	
