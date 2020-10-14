#include "holberton.h"
#include <stdlib.h>
/**
  *free_grid - frees array of pointers to int
  *@grid: pointer to grid - array of pointers to int -
  *@height: height of grid
  *Return: void
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
