#include "main.h"

/**
 * read_textfile - Entry point
 *
 * Description: reads a file and prints to stdout
 * @filename: name of file
 * @letters: num of letters to print
 * Return: void
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int return_value;

	if (!filename)
		return (0);

	return_value = write(1, filename, letters);

	if (return_value == -1)
		return (0);

	return (return_value);

}
