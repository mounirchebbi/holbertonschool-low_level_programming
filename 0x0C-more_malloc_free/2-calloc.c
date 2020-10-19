#include "holberton.h"
#include <stdlib.h>
/**
  *_calloc: creates array of nmemb
  *@nmemb: int
  *@size: int
  *Return: pointer to array
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *out;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	out = malloc(nmemb * size);
	if (out == NULL)
		return (NULL);
	for (i = 0; i < nmemb*size; i++)
		out[i] = 0;
	return (out);
}

