#include "holberton.h"
/**
 * create_file - function to create a file
 * @filename: name of file
 * @text_content: string to write
 * Return: -1 when fails / 1 when success
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, text_lenght;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	text_lenght = 0;
	w = write(o, text_content, text_lenght);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
