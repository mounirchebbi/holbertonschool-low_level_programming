#include "holberton.h"
/**
  *puts_half - prints last half of string
  *@str: pointer to the string
  *Return: void
  */
void puts_half(char *str)
{
	int i = 0;
	int j, start;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		start = i / 2 + 1;
	}
	else
	{
		start = i / 2;
	}
	for (j = start; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
