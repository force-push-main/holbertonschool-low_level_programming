#include "main.h"

/**
 * _atoi - Entry point
 *
 * Description: converts string num to int
 * @s: string to be checked
 * Return: num or 0 if no num
 */

int _atoi(char *s)
{
	int res, sign;

	char *start = s;

	res = 0;
	sign = 1;

	while (*s && !res)
	{
		if (*s == '-' && sign > 0)
		{
			-sign;
		}

		if (*s == '+' && sign < 0)
		{
			-sign;
		}
		s++;
	}
	s = start;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			if (res)
			{
				res = (res * 10) + *s - '0';
			}
			else
			{
				res = *s;
			}
		}
		s++;
	}
	return (res * sign);
}
