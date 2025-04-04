#include "main.h"

/**
 * create_file - Entry point
 *
 * Description: creates file and appends text
 * @filename: name of file
 * @text_content: text to add to file
 * Return: 1 if success or -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	i = 0;

	while (text_content[i])
		i++;

	if (!i)
		return (0);

	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
		return (0);

	return (1);


}
