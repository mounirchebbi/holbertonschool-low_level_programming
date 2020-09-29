#include "holberton.h"
#include <stdio.h>
/**
  *print_array - prints n elements of array
  *@a: pointer to array
  *@n: number of elements to print
  *Return: void
  */
void print_array(int *a, int n)
{
	int i;

	if (n > 1)
	{
		for (i = 0; i < n - 2; i++)
		{
			printf("%d, ", *(a + i));
		}
	}
	printf("%d\n", *(a + n - 1));
}
