#include "holberton.h"
/**
  *print_number - int
  *@n: int to print
  *Return: void
  */
void print_number(int n)
{
	int d = 1;

	if (n < 0)
	{
		_putchar ('-');
		n = n * -1;
	}
	while (n / d >= 10)
	{
		d = d * 10;
	}
	while (d > 1)
	{
		if (n >= d)
		{
			_putchar(n / d + '0');
			n = n % d;
		}
		else
			_putchar('0');
		d = d / 10;
	}
	_putchar (n + '0');
}
