/**
 * check_prime - Entry point
 *
 * Description: finds if n is prime
 * @n: number to check
 * @product: current test case
 * Return: 1 if prime 0 if not
 */

int check_prime(int n, int product)
{
	if (product <= 1)
		return (0);

	if (n % product == 0)
		return (0);

	if (product * product > n)
		return (1);

	return (check_prime(n, product + 1));
}


/**
 * is_prime_number - Entry point
 *
 * Description: finds if n is prime
 * @n: number to check
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
