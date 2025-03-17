#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of arg strings
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b;

	int (*fetched_func)(int, int);

	if (argc < 3 || !argv[1] || !argv[2] || !argv[3])
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fetched_func = get_op_func(argv[2]);

	if (!fetched_func || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fetched_func(a, b));

	return (0);
}
