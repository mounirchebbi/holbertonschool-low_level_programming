#include "holberton.h"
#include <stdlib.h>
/**
  *_realloc - reallocates memory
  *@ptr: pointer to reallocate
  *@old_size: old size
  *@new_size: new size
  *Return: new memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *in;
	char *out;

	if (new_size == 0)
	{
		if (ptr == NULL)
			free(ptr);
		return (NULL);
	}
	if (old_size == 0)
	{
		if (ptr == NULL)
			free(ptr);
		out = malloc(new_size);
		return (out);
	}
	if (ptr == NULL)
	{
		out = malloc(new_size);
		return (out);
	}
	if (new_size == old_size)
		return (ptr);
	out = malloc(new_size);
	in = (char *) ptr;
	for (i = 0; i < new_size; i++)
		out[i] = in[i];
	free(ptr);
	return (out);
}
