#include "holberton.h"
/**
  *_strspn- gets the length of a prefix substring
  *@s:pointer to string
  *@accept:pointer to string
  *Return: lenght
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	int stop = 0;

	while (*(s + i) >= '\0' && stop == 0)
	{
		stop = 1;
		for (j = 0; *(accept + j) >= '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				stop = 0;
		}
		i++;
	}
	return (i - 1);
}
