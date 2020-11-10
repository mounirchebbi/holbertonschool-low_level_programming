#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile - read text file
 * @filename: pointer to file
 * @letters: letters size
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t r, w, o;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	o = open(filename, O_RDONLY);
	if (r == -1 || w == -1 || o == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
