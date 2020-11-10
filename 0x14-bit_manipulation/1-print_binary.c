#include "holberton.h"
/**
 * print_binary - Prints the binary of int
 * @n: int number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	else
	{
		if (n / 2)
			_putchar(1 + '0');
		else
			_putchar('0');
	}
}
