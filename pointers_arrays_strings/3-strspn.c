/**
 * _strspn - Entry point
 *
 * Description: returns the length of word containing only accept
 * @s: string to be searched
 * @accept: letters needed in word
 * Return: length of word containing accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, is_accept;

	unsigned int res, count_ln, word_ln;

	res = 0;
	i = 0;
	is_accept = 0;
	count_ln = 0;
	word_ln = 0;

	while (*s && !res)
	{
		while ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			while (accept[i])
			{
				if (*s == accept[i])
					is_accept = 1;
				i++;
			}

			if(is_accept == 1)
				count_ln++;

			word_ln++;
			s++;
			is_accept = 0;
			i = 0;
		}

		if (word_ln == count_ln && count_ln != 0)
			res += word_ln;
		
		word_ln = 0;
		count_ln = 0;

		s++;
	}
	return (res);
}
