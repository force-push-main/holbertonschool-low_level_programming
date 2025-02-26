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

	res = 0;
	sign = 1;

	while (*s && (*s < '0' && *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	
	while (*s && (*s >= '0' && *s <= '9'))
	{
		if (res)
			res = (res * 10) + (*s - '0');
		else
			res = (*s * sign) - '0';
		s++;
	}

	return (res);
}
