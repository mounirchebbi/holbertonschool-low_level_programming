#include "holberton.h"
#include <stdlib.h>
/**
  *alloc_grid - create array of pointers to int
  *@width: width of array
  *@height: height of array
  *Return: array of pointers to int
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width > 0 && height > 0)
	{
		arr = malloc(sizeof(int *) * height);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(int) * width);
			if (arr[i] == NULL)
				return (NULL);
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
		return (arr);
	}
	return (NULL);
}

