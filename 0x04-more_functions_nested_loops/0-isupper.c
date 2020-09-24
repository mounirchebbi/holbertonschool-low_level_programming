#include "holberton.h"
/**
  *_isupper - checks if uppercase
  *Return: 1 when true 0 when false
  *@c: character to check
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

