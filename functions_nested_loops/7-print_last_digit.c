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
	int numToCheck;
	int lastNum;
	int absNum;

	numToCheck = r;
	absNum = numToCheck * ((numToCheck > 0) - (numToCheck < 0));
	lastNum = absNum % 10;
	_putchar(lastNum + 48);

	return (lastNum);
}
