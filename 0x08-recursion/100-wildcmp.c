#include "holberton.h"
/**
  *wildcmp- compare strings
  *@s1: pointer to string
  *@s2: pointer to string
  *Return: int
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));

	}
	else if (*s1 != '\0' && *s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 != *s2 && *s2 == '*')
	{
		return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));
	}
	return (0);
}
