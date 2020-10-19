#include "holberton.h"
#include <stdio.h>
/**
  *array_range - arry of int
  *@min: minimum value
  *@max: maximum value
  *Return: pointer to array
  */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (max < min)
		return (NULL);
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (size == 0)
		arr[0] = min;
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = min;
			min++;
		}
	}
	return (arr);
}
