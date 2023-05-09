#include <stdio.h>
#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	ssize_t read_bytes, written_bytes;
	int fd, fd1, close_error;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	read_bytes = read(fd, buffer, 1024);
	if (read_bytes == -1)
	{
		close(fd);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		close(fd);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	written_bytes = write(fd1, buffer, read_bytes);
	if (written_bytes == -1)
	{
		close(fd);
		close(fd1);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close_error = close(fd);
	if (close_error)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	close_error = close(fd1);
	if (close_error)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
