#include "holberton.h"
/**
  *times_table - prints times table
  *Retun: void
  */
void times_table(void)
{
	int i, j, step;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			step = i * j;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if (j == 9)
			{
				print_last_colmn(step);
			}
			else
			{
				print_colmn(step);
			}
		}
	}
}
