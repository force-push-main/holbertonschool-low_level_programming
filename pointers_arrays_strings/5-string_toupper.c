/**
 * string_toupper - Entry point
 *
 * Description: changes lowercase to uppercase
 * @str: string to be edited
 * Return: edited string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		i++;
	}

	return (str);
}
