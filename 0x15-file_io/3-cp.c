#include "holberton.h"
/**
  * check_read - check read return value
  * @r: read return value
  * @buffer: buffer
  * @file : file
  */
void check_read(int r, char *buffer, char *file)
{
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		free(buffer);
		exit(98);
	}
}
/**
  *check_write - check write return value
  *@w: write return value
  *@buffer: buffer
  *@file : file
  */
void check_write(int w, char *buffer, char *file)
{
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		free(buffer);
		exit(99);
	}
}
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
	buffer = allocate_buffer(argv[2]);
	fd_in = open(argv[1], O_RDONLY);
	fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	r = read(fd_in, buffer, 1024);
	check_read(r, buffer, argv[2]);
	while (r > 0)
	{
		w = write(fd_out, buffer, r);
		check_write(w, buffer, argv[2]);
		r = read(fd_in, buffer, 1024);
		check_read(r, buffer, argv[2]);
		fd_out = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(fd_in);
	close_file(fd_out);
	return (0);
}
