#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: the name of the file that will be read
 * @letters: number of letters it should be be read and printed
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes, written_bytes;
	int fd;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		close(fd);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
		return (0);

	return (written_bytes);
}
