#include <stdlib.h>
#include"function_pointers.h"
/**
  *int_index - search for elements index
  *@array: array of elements
  *@size: size of array
  *@cmp: pointer to function
  *Return: index of element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
