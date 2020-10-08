#include "holberton.h"
/**
  *pal- search if palandrome
  *@s: pointer
  *@p: pointer
  *Return:int
  */
int pal(char *s, char *p)
{
	if (p <= s)
		return (1);
	if (*s == *p)
	{
		s++;
		p--;
	return (pal(s, p));
	}
	else
	{
		return (0);
	}
}
/**
  *is_palindrome- palindrome?
  *@s: string
  *Return: int
  */
int is_palindrome(char *s)
{
	char *p;

	if (*s == '\0')
		return (0);
	else if (*(s + 1) == '\0')
		return (0);
	for (p = s; *p > '\0'; p++)
	{
	}
	p--;
	return (pal(s, p));
}

