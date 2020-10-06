#include "holberton.h"
#include <stdio.h>
/**
  *print_diagsums - print diagonals sums
  *@a: 2d array crushed into 1d
  *@size: size of 2d array
  *Return:void
  */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int sa = 0;
	long int sb = 0;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		sa += *(a + i);
	}
	for (j = size - 1; j < size * size - 1; j = j + size - 1)
	{
		sb += *(a + j);
	}
	printf("%ld, %ld\n", sa, sb);
}

