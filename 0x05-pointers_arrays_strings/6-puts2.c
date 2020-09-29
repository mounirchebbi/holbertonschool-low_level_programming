#include "holberton.h"
/**
  *puts2 - print characters step 2
  *@str: pointer to string
  *Return: void
  */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
		if (*(str + i - 1) == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
