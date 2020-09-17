#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 when success then exit
 */
int main(void)
{
	char ch = 'a';

	do {
		switch (ch)
		{
			case 'e':
				ch++;
			case 'q':
				ch++;
			default:
				putchar(ch);
				ch++;
		}
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
