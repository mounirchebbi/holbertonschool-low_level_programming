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
	int i;
	int sa = 0;
	int sb = 0;

	for (i = 0; i < size; i++)
	{
		sa += *(a + (i * (size + 1)));
		sb += *(a + (i * (size - 1)));
	}
	printf("%d, %d\n", sa, sb);
}

