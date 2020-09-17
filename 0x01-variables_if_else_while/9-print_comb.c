#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 when success then exit
 */
int main(void)
{
	int i = 0;

	do {
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
			i++;
		}
		else
		{
			i++;
		}
	} while (i <= 9);
	putchar('\n');
	return (0);
}
