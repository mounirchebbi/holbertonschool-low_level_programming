#include "holberton.h"
/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum = 0;
	unsigned long int diference = n ^ m;

	while (diference > 0)
	{
		if (diference & 1)
			sum++;
		diference = diference >> 1;
	}

	return (sum);
}
