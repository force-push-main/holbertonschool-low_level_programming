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

	i = 0;

	if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	{
		str[i + 1] = str[i + 1] - 32;
	}

	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}

		i++;
	}

	return (str);
}
