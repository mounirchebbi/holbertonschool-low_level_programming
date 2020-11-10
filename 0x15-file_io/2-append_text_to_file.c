#include "holberton.h"
/**
 * append_text_to_file - add text to the end of file
 * @filename: name of the file
 * @text_content: string
 * Return: 1 when success / -1 when fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int text_lenght = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		for (text_lenght = 0; text_content[text_lenght];)
			text_lenght++;
	}
	w = write(o, text_content, text_lenght);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
