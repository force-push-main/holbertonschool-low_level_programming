/**
 * _strcmp - Entry point
 *
 * Description: copies string to buffer
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	int res;
	char *s1Start = s1;
	char *s2Start = s2;

	res = 0;

	while (*s1 && !res)
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
		}
		s1++;
		s2++;
	}

	s1 = s1Start;
	s2 = s2Start;

	return (res);
}
