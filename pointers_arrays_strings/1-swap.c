/**
 * swap_int - Entry point
 *
 * Description: swaps value of two vars
 * @a: var one to be swapped with
 * @b: this var
 * Return: always returns void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
