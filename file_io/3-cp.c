#include "main.h"

/**
 * _cp - Entry point
 *
 * Description: copies content of file to new file
 * @from: file to copy from
 * @to: file to copy to
 * Return: void
 */

void _cp(char *from, char *to)
{
	int fd_to, fd_from, w, r, c_to, c_from;
	char buffer[1024];

	fd_from = open(from, O_RDWR);
	fd_to = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((r = read(fd_from, &buffer, 1024)) > 0)
		w = write(fd_to, buffer, r);
	if (fd_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	if (fd_to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}

	c_to = close(fd_to);
	c_from = close(fd_from);

	if (c_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (c_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - Entry point
 *
 * Description: copies content of file to new file
 * @argc: number of args passed
 * @argv: args passed as array of strings
 * Return: 1 if success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}
