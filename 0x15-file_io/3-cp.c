#include <stdio.h>
#include "main.h"

void error_fun(int, int, char **);

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
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_fun(fd, fd1, argv);

	read_bytes = 1024;
	while (read_bytes == 1024)
	{
		read_bytes = read(fd, buffer, 1024);
		if (read_bytes == -1)
			error_fun(-1, 0, argv);

		written_bytes = write(fd1, buffer, read_bytes);
		if (written_bytes == -1)
			error_fun(0, -1, argv);
	}

	close_error = close(fd);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	close_error = close(fd1);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
/**
 * error_fun - checks for errors.
 * @file_from: file from where data will be copied
 * @file_to: file where data will copied to.
 * @argv: arguments vector.
 *
 * Return: void.
 */
void error_fun(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
