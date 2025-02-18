#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: putchar a-z and A-Z in for loop
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; i < 91; j++)
	{
		putchar(j);
	}	
	putchar('\n');
	return (0);
}
