/**
 * reverse_array - Entry point
 *
 * Description: reverses array of ints
 * @a: array to be reversed
 * @n: number of els in array
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 1;

	while (i < n)
	{
		temp = a[n - 1];
		a[n - 1] = a[i - 1];
		a[i - 1] = temp;
		i++;
		n--;
	}

}
