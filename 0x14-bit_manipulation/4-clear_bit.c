#include "holberton.h"
/**
 * clear_bit - Set bit at given index to 0
 * @n: pointer to decimal
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	(*n) = (*n) & (~(1 << index));

	return (1);
}
