#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: adds positive numbers or returns 0
 * @argc: number of command line args
 * @argv: array of command line args
 * Return: 0 if argv contains positive numbers else 1
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (strspn(argv[i], "0123456789") != strlen(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
