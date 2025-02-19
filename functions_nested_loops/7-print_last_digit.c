#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: returns last digit of int
 * @r: int to extract last digit from
 * Return: returns 1 or 0
 */

int print_last_digit(int r)
{
	int lastNum;
	int absNum;

	absNum = r;
	if (absNum < 0)
	{
		absNum = absNum * -1;
	}
	lastNum = absNum % 10;
	_putchar(lastNum + 48);

	return (lastNum);
}
