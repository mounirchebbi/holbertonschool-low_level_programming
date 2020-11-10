#include "holberton.h"
/**
 * get_bit - value of a bit at index for specific decimal
 * @n: decimal
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
