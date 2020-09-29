#include "holberton.h"
/**
  *swap_int - swap two int values
  *@a: first int
  *@b: seconf int
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
