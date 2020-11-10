#include "holberton.h"
/**
  *power_two- calculate power of two
  *@x: power
  *Return: result
  */
unsigned int power_two(int x)
{
	unsigned int power = 1;
	int i;

	if (x == 0)
		return (1);
	for (i = 0; i < x; i++)
		power *= 2;
	return (power);
}
/**
  *binary_to_uint- binary to int
  *@b: binary string
  *Return: decimal
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int size = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[size] != '\0')
		size++;
	size--;
	while (b[i] != '\0')
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		else
		{
			if (b[i] == '1')
				sum += power_two(size);
			size--;
			i++;
		}
	}
	return (sum);
}
