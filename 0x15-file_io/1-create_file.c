#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to creat
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t written_bytes;
	int fd, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	/* counting the length of the given string */
	len = 0;
	while (text_content[len])
		len++;

	/* writing the given string to the opened file */
	written_bytes = write(fd, text_content, len);
	if (written_bytes == -1)
		return (-1);

	close(fd);
	return (1);

}
