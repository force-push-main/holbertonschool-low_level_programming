/**
 * _strlen - Entry point
 *
 * Description: returns length of string
 * @s: string to be checked
 * Return: legnth of string
 */

int _strlen(char *s)
{
	int l, i;

	i = 0;

	while (*s[i] != '\0')
	{
		l++;
		i++;
	}

	return (l)
}
