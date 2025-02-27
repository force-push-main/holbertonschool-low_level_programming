/**
 * cap_string- Entry point
 *
 * Description: changes string to title case
 * @str: string to be edited
 * Return: edited string
 */

char *cap_string(char *str)
{
	int i;

	i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}

		i++;
	}

	return (str);
}
