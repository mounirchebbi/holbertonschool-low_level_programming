#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 when success then exit
 */
int main(void)
{
	char ch = 'a';

	do {
		putchar (ch);
		ch++;
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
