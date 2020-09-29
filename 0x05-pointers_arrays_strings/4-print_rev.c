#include "holberton.h"
/**
  *print_rev - prints in reverse
  *@s: pointer to string
  *Return: void
  */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (; i >= 0 ; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
