#include "holberton.h"
/**
  *_isalpha - check if alphabetic
  *@c : character to check
  *Return: 1 when true 0 when false
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
