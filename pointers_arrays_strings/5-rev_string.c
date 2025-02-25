/**
 * rev_string - Entry point
 *
 * Description: returns reversed string
 * @s: string to be checked
 * Return: void
 */

void rev_string(char *s)
{
	char temp;
	int i, j;

	i = 0;
	j = 0;

	while (s[i])
	{
		i++;
	}

	while (i > j)
	{
		temp = s[i - 1];
		s[i - 1] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}
