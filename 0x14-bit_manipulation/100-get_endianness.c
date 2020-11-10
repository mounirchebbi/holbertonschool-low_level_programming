#include "holberton.h"
/**
 * get_endianness - Checks the endianness type used in memory adressing
 *
 * Return: 0 when "big-endian" / 1 when "little-endian"
 */
int get_endianness(void)
{
	int one = 1;
	char *endianess = (char *)&one;

	if (*endianess == 1)
		return (1);
	return (0);
}
