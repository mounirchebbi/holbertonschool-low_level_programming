#include "holberton.h"
/**
  *print_colmn - print single int in times table
  *@s : int to print
  *Return: void
  */
void print_colmn(int s)
{
	int nn, n;

	if (s < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(s + '0');
	}
	else
	{
		nn = s / 10;
		n = s % 10;
		_putchar(' ');
		_putchar(nn + '0');
		_putchar(n + '0');
	}
	_putchar(',');
}
