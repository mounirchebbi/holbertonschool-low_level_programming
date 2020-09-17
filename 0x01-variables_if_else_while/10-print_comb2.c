#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 when success then exit
 */
int main(void)
{
	int i;
	int j = 0;

	do {
		i = 0;
		do {
			putchar('0' + j);
			putchar('0' + i);
			if (i == 9 && j == 9)
			{
				i++;
			}
			else
			{
				putchar(',');
				putchar(' ');
				i++;
			}
		} while (i <= 9);
		j++;
	} while (j <= 9);
	putchar('\n');
	return (0);
}
