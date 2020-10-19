#include "holberton.h"
#include <stdlib.h>
/**
  *malloc_checked - checks if memory is properly allocated
  *@b: size of memory to allocate
  *Return - pointer to memory
  */
void *malloc_checked(unsigned int b)
{
	void *out;
	out = malloc(b);
	if (out == NULL)
		exit(98);
	return (out);
}
