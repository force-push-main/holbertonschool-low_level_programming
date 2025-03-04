/**
 * factorial - Entry point
 *
 * Description: return factorial of n
 * @n: number to find factorial of
 * Return: return factorial or -1 if n < 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (-1);
}
