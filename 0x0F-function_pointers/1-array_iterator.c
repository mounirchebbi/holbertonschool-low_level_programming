#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *array_iterator- apply function on each element
  *@array: pointer to array
  *@size: size of array
  *@action: pointer to function to aplly
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
