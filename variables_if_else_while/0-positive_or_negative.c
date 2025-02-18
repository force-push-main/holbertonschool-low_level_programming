#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: checks if number is pos, neg or 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	if (n < 0)
		printf("is negative\n");
	if (n == 0)
		printf("is zero\n");
	return (0);
}
