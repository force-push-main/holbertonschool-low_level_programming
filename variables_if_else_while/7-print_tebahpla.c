#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: putchar z to a in for loop
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
