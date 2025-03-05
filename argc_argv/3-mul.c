#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints product of ints or 1 if none
 * @argc: number of command line args
 * @argv: array of command line args
 * Return: 0 if argv contains ints else 1
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
