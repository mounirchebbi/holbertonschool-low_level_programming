#include "holberton.h"
#include <stdlib.h>
/**
  *create_array- creates array of chars
  *@size: size of the array
  *@c: intialization char
  *Return: pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[i] = '\0';
	return (arr);
}
