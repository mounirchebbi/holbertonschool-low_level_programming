#include "holberton.h"
/**
  *string_toupper - lower case to upper case
  *@s: pointer to string
  *Return: pointer to string
  */
char *string_toupper(char *s)
{
	int i = 0;
	int n;

	while (*(s + i) != '\0')
	{
		n = (int) *(s + i);
		if (n >= 97 && n <= 122)
			*(s + i) = n - 32;
		i++;
	}
	return (s);
}

