#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints number of args in argv
 * @argc: number of command line args
 * @argv: array of command line args
 * Return: success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
