#include "main.h"

/**
 * _abs - entry point
 * @r: number to be checked
 * Description: finds absolute value of number
 * Return: returns absolute value
 */

int _abs(int r)
{
	int a;

	a = r * ((r > 0) - (r < 0));

	return (a);
}
