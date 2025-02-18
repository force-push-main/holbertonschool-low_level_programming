#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: putchar a to z in for loop
 * Return: Always 0 (success)
 */
int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
