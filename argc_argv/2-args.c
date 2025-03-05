#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all args it recieves
 * @argc: number of command line args
 * @argv: array of command line args
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
