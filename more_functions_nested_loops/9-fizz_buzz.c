#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints 1-100, or fizz or buzz or fizz buzz if multiple
 * Return: always returns void
 */

int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
			printf("Fizz");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i == 100)
		{
			putchar('\n');
		}
		else
		{
			putchar(' ');
		}
		i++;
	}

	return (0);
}
