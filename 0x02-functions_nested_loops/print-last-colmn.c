#include "holberton.h"
/**
  *print_last_colmn - prints int in the last column
  *@s : int to print
  *Return: void
  */
void print_last_colmn(int s)
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
	_putchar('\n');
}
