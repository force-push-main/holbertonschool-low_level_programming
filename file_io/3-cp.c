#include "main.h"

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
	int fd_to, i, fd_from, r, w, c_to, c_from;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0666);
	r = read(fd_from, &buffer, 1024);
	for (i = 0; buffer[i];)
		i++;
	w = write(fd_to, &buffer, i);
	if (fd_from < 0 || r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to < 0 || w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c_to = close(fd_to);
	c_from = close(fd_from);
	if (c_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (c_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (1);
}
