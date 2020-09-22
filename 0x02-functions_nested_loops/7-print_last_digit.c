#include "holberton.h"
/**
 *print_last_digit - prints the last digit
 *@i : number to print
 *Return: last digit
 */
int print_last_digit(int i)
{
	int r = i % 10;

	if (r < 0)
	{
		r = r * -1;
	}
	else
	{
	}
	_putchar (r + '0');
	return (r);

}
