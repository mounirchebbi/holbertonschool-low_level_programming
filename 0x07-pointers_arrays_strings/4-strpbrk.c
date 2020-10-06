#include "holberton.h"
/**
  *_strpbrk- locates the first occurrence
  *@s:pointer to string
  *@accept:pointer to string
  *Return: pointer
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j, check;

	for (i = 0 ; *(s + i) != '\0' && *(s + i) != ' '; i++)
	{
		check = 0;
		for (j = 0; *(accept + j) != '\0' && !check; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				check = 1;
				return (s + i);
			}
		}
	}
	return (0);
}


