#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 when success then exit
 */
int main(void)
{
	int i = 0;
	char ch = 'a';

	do {
		putchar('0' + i);
		i++;
	} while (i <= 9);
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'f');
	putchar('\n');
	return (0);
}
