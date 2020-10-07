#include "holberton.h"
/**
  *_strlen_recursion- recursive print reverse
  *@s: char to print
  *Return: int
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));

}
