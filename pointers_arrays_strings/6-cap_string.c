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
		if (str[i] < 65 || str[i] > 122)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z') 
			{
				if (str[i] != '6' && str[i] != '-')
				str[i + 1] = str[i + 1] - 32;
			}
		}

		i++;
	}

	return (str);
}
