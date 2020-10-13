#include "holberton.h"
#include <stdlib.h>
/**
  *create_array - create array of char
  *@size: size of array
  *@c: char to initialize array
  *Return: pointer to array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == 0)
		return (NULL);
	if (size > 0)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
		return (arr);
	}
	return (NULL);
}
