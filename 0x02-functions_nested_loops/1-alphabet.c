#include "holberton.h"
/**
   * print_alphabet - print lower case alphabet.
    *
     * void.
      */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
