#include "holberton.h"
/**
 * set_bit - Set bit at given index to 1
 * @n: pointer to decimal
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	(*n) = (*n) | (1 << index);

	return (1);
}
