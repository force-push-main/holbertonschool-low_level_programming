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
	int fd, write_return_value, read_return_value;
	char c;
	size_t i;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	for (i = 0; i < letters; i++)
	{
		read_return_value = read(fd, &c, 1);
		if (read_return_value == 0)
			return (0);

		write_return_value = write(STDOUT_FILENO, &c, 1);
		if (write_return_value == -1)
			return (0);
	}

	close(fd);

	return (i);

}
