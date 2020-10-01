#include "holberton.h"
/**
  *reverse_array - reverses array of int
  *@a: pointer to the array of int
  *@n: size of array
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i < n / 2; i++)
	{
		k = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = k;
	}
}

