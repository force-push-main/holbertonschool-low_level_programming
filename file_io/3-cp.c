#include "main.h"

/**
 * close_file - Entry point
 *
 * Description: close files
 * @fd: file to close
 * Return: void
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
	int fd_to, fd_from, w, r;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDWR);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		if (fd_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		w = write(fd_to, buffer, r);

		if (fd_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	}

	close_file(fd_to);
	close_file(fd_from);

	return (0);
}
