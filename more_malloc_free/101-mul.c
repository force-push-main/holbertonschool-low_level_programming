#include <stdlib.h>
#include <stdio.h>

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
		string[i];

	return (i);

}


int contains_digits(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
	{
		if (string[i] > '9' || string[i] < '0')
			return (0);
	}

	return (1);

}


void push_to_array(int *num_arr, char *input, int input_len)
{

	int i;

	for (i = 0; i < input_len; i++)
		num_arr[i] = input[i] - '0';
}

/**
 * main - Entry point
 *
 * Description: multiples two pos nums
 * @argc: number of args passed
 * @argv: array of args passed
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int *num1, *num2, *ans;

	if (argc > 3)
	{
		printf("Error too many args\n");
		exit(98);
	}
	
	if (!contains_digits(argv[1]) || !contains_digits(argv[2]))
	{
		printf("Found non-digit in number");
		exit(98);
	}

	num1 = malloc(sizeof(int) * _strlen(argv[1]));
	num2 = malloc(sizeof(int) * _strlen(argv[2]));
	ans = malloc(sizeof(int) * _strlen(argv[1]) + _strlen(argv[2]));

	if (!num1 || !num2 || !ans)
	{
		printf("Error in getting memory");
		exit(98);
	}


	printf("%d\n", num1 * num2);

	return (0);
}
