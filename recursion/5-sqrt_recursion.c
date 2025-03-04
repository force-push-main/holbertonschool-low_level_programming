/**
 * find_square - recursive function to find square root
 *
 * Description: returns natural square root of n
 * @n: number to find square root of
 * @root: root of n
 * Return: return natural square root or -1 if none exists
 */

int find_square(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (find_square(n, root + 1));

}


/**
 * _sqrt_recursion - Entry point
 *
 * Description: returns natural square root of n
 * @n: number to find square root of
 * Return: return natural square root or -1 if none exists
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_square(n, 1));
}
