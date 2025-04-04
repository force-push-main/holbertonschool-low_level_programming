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
	char *c;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	
	c = malloc(letters);

	if (!c)
		return (0);

	read_return_value = read(fd, c, letters);

	if (read_return_value == -1)
		return(0);

	write_return_value = write(1, c, letters);

	close(fd);

	return (write_return_value);

}
