#include "holberton.h"
/**
  *_strcmp - compare two strings
  *@s1: first string
  *@s2: second string
  *Return: result
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) != '\0' && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return ((int)*(s1 + i) - (int)*(s2 + i));
}

