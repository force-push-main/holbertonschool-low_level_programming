#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints name of file
 * @argc: number of command line args
 * @argv: array of command line args
 * Return: void
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (1);
}
