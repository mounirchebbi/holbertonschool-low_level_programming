#include "holberton.h"
/**
  *_isdigit - checks if digit
  *Return: 1 when true 0 when false
  *@c : ascii of caracter to check
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
