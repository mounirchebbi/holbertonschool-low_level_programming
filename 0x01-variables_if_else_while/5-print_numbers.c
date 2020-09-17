#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 when success then exit
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i <= 9);
	putchar('\n');
	return (0);
}
