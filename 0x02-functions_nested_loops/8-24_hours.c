#include "holberton.h"
/**
  *jack_bauer - gives time counter
  *Return: void
 */
void jack_bauer(void)
{
	int hh = 0;
	int h, mm, m, hour;

	do {
		h = 0;
		do {
			for (mm = 0; mm < 6; mm++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar(hh + '0');
					_putchar(h + '0');
					_putchar(':');
					_putchar(mm + '0');
					_putchar(m + '0');
					_putchar('\n');
					hour = hh * 10 + h;
				}
			}
			h++;
		} while (h < 10 && hour < 23);
		hh++;
	} while (hour < 23);
}
