#include "holberton.h"
/**
 * allocate_buffer - allocates buffer of 1024 bytes
 * @file: file
 * Return: buffer
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close file
 * @fd: file descriptor
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
 * main - function to copy file content.
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0 when success - exit 97/98/99/100 when fails
 */
int main(int argc, char *argv[])
{
	int fd_in, fd_out;
	int r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_in = open(argv[1], O_RDONLY);
	fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = allocate_buffer(argv[2]);
	r = read(fd_in, buffer, 1024);
	while (r > -1)
	{
		if (fd_in == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(fd_out, buffer, r);
		if (fd_out == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd_out, buffer, 1024);
		fd_out = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(fd_in);
	close_file(fd_out);
	return (0);
}
