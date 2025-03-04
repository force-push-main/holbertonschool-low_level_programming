/**
 * _pow_recursion - Entry point
 *
 * Description: returns value of x raised to power of y
 * @x: first value
 * @y: value of power
 * Return: return value or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y >= 1)
	{
		return (x *= _pow_recursion(x, y - 1));
	}

	return (-1);
}
