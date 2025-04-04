#include "main.h"

/**
 * append_text_to_file - Entry point
 *
 * Description: appends text to existing file
 * @filename: name of file
 * @text_content: text to add to file
 * Return: 1 if success or -1 if error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (!filename)
		return (-1);

	i = 0;

	while (text_content && text_content[i])
		i++;

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, i);

	if (w == -1 || fd == -1)
		return (-1);

	close(fd);

	return (1);

}
