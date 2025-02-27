/**
 * leet - Entry point
 *
 * Description: converts string to l33t
 * @s: string to be converted
 * Return: converted string
 */

char *leet(char *s)
{
	char str[11] = {"aeotlAEOTL"};
	char conv[11] = {"4307143071"};

	int i = 0;
	int j = 0;

	while (s[i])
	{
		while (str[j])
		{
			if (s[i] == str[j])
			{
				s[i] = conv[j];
			}
			j++;
		}
		j = 0;
		i++;
	}

	return (s);
}

