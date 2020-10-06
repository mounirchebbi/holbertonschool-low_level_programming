#include "holberton.h"
/**
  *_strspn- gets the length of a prefix substring
  *@s:pointer to string
  *@accept:pointer to string
  *Return: lenght
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, check;
	unsigned int sum = 0;

	for (i = 0 ; *(s + i) != '\0' && *(s + i) != ' '; i++)
	{
		check = 0;
		for (j = 0; *(accept + j) != '\0' && !check; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				sum++;
				check = 1;
			}
		}
	}
	return (sum);
}


