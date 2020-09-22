#include "holberton.h"
/**
  *times_table - prints times table
  *Retun: void
  */
void times_table(void)
{
	int i, j, step;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			step = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (j == 10)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (step >= 10)
				{
					_putchar(step / 10 + '0');

				}
				else
				{
					_putchar(' ');
				}
				_putchar(step % 10 + '0');
			}
		}
	}
}
