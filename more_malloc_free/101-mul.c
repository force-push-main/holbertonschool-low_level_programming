#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * _strlen - Entry point
 *
 * Description: finds length of string
 * @string: string to find
 * Return: length of string
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
		;

	return (i);

}


/**
 * contains_digits - Entry point
 *
 * Description: checks if inputted num contains only digits
 * @string: string to check
 * @len: length of string
 * Return: void
 */


int contains_digits(char *string, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (string[i] > '9' || string[i] < '0')
			return (0);
	}

	return (1);

}


/**
 * string_to_array - Entry point
 *
 * Description: converts string to array of ints
 * @num_arr: pointer to array where ints should be stored
 * @string: string to be converted
 * @string_len: length of string
 * Return: void
 */


void string_to_array(int *num_arr, char *string, int string_len)
{

	int i, j;

	for (i = string_len - 1, j = 0; i >= 0; i--, j++)
		num_arr[j] = string[i] - '0';
}


/**
 * multiply_nums - Entry point
 *
 * Description: multiplies two nums
 * @num1: first num to multiply
 * @num1_len: length of first num
 * @num2: second num to multiply
 * @num2_len: length of second num
 * @ans: pointer to array where answer should be stored
 * Return: void
 */

void multiply_nums(int *num1, int num1_len, int *num2, int num2_len, int *ans)
{
	int i, j, temp;

	for (i = 0; i < num1_len; i++)
	{
		for (j = 0; j < num2_len; j++)
		{
			ans[i + j] += num1[i] * num2[j];
		}
	}

	for (i = 0; i < num1_len + num2_len - 1; i++)
	{
		temp = ans[i] / 10;
		ans[i] = ans[i] % 10;
		ans[i + 1] = ans[i + 1] + temp;
	}
}

/**
 * print_ans - Entry point
 *
 * Description: prints final answer
 * @ans: answer to print
 * @len: length of answer
 * Return: void
 */

void print_ans(int *ans, int len)
{
	int i;

	for (i = len; i >= 0; i--)
		_putchar(ans[i] + '0');

	_putchar('\n');
}


/**
 * print_error - Entry point
 *
 * Description: prints error
 * Return: void
 */

void print_error(void)
{
	int i;
	char *err;

	err = "Error";

	for (i = 0; i < 5; i++)
		_putchar(err[i]);

	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: multiples two pos nums
 * @argc: number of args passed
 * @argv: array of args passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int *num1, *num2, *ans, s1_len, s2_len;

	if (argc > 3)
	{
		print_error();
		exit(98);
	}

	s1_len = _strlen(argv[1]);
	s2_len = _strlen(argv[2]);

	if (!contains_digits(argv[1], s1_len) || !contains_digits(argv[2], s2_len))
	{
		print_error();
		exit(98);
	}

	num1 = malloc(sizeof(int) * s1_len);
	num2 = malloc(sizeof(int) * s2_len);
	ans = calloc(s1_len + s2_len - 2, sizeof(int));

	if (!num1 || !num2 || !ans)
	{
		print_error();
		exit(98);
	}

	string_to_array(num1, argv[1], s1_len);
	string_to_array(num2, argv[2], s2_len);

	multiply_nums(num1, s1_len, num2, s2_len, ans);

	print_ans(ans, s1_len + s2_len - 2);

	free(num1);
	free(num2);
	free(ans);

	return (0);
}
