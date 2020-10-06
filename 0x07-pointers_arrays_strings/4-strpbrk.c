#include "holberton.h"
/**
  *_strpbrk- locates the first occurrence in the string
  *@s:pointer to string
  *@accept:pointer to string
  *Return: pointer of first occurence
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;
	int check = 0;

	for (i = 0 ; *(s + i) != '\0' && !check; i++)
	{
		for (j = 0; *(accept + j) != '\0' && !check; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				p = s + i;
				check = 1;
			}
		}
	}
	return (p);
}


