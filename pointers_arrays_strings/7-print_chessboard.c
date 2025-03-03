#include "main.h"

/**
 * print_chessboard - Entry point
 *
 * Description: prints chessboard from 2d array
 * @a: first subscript value
 * Return: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z'))
				_putchar(a[i][j]);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}

}
